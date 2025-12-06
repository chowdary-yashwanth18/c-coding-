#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<assert.h>
#define MAX_CHARACTERS 1005
#define MAX_PARAGRAPHS 5

// helper: duplicate substring [start, end)
static char* strndup_c(const char* start, size_t len) {
    char* out = (char*)malloc((len + 1) * sizeof(char));
    memcpy(out, start, len);
    out[len] = '\0';
    return out;
}

// split a sentence into words by spaces (ignore multiple spaces)
static char** split_words(const char* sentence, int* out_count) {
    int count = 0;
    const char* p = sentence;
    while (*p) {
        while (*p == ' ') p++;
        if (!*p) break;
        count++;
        while (*p && *p != ' ') p++;
    }

    char** words = (char**)malloc(count * sizeof(char*));
    p = sentence;
    int idx = 0;
    while (*p) {
        while (*p == ' ') p++;
        if (!*p) break;
        const char* start = p;
        while (*p && *p != ' ') p++;
        size_t len = (size_t)(p - start);
        words[idx++] = strndup_c(start, len);
    }
    if (out_count) *out_count = count;
    return words;
}

// split a paragraph into sentences by '.' (ignore empty segments)
static char*** split_sentences(const char* paragraph, int* out_count) {
    // First pass: count sentences (non-empty between dots)
    int count = 0;
    const char* p = paragraph;
    while (*p) {
        while (*p == ' ') p++;                // allow leading spaces
        if (!*p) break;
        const char* start = p;
        while (*p && *p != '.') p++;
        if (p > start) count++;               // non-empty segment
        if (*p == '.') p++;
    }

    char*** sentences = (char***)malloc(count * sizeof(char**));
    p = paragraph;
    int si = 0;
    while (*p) {
        while (*p == ' ') p++;
        if (!*p) break;
        const char* start = p;
        while (*p && *p != '.') p++;
        size_t len = (size_t)(p - start);
        if (len > 0) {
            char* sentence_buf = strndup_c(start, len);
            int wcount = 0;
            sentences[si++] = split_words(sentence_buf, &wcount);
            free(sentence_buf);
        }
        if (*p == '.') p++;
    }
    if (out_count) *out_count = si;
    return sentences;
}

// Build: document -> paragraphs -> sentences -> words
char**** get_document(char* text) {
    // Count paragraphs: separated by '\n'
    int paragraphs = 0;
    for (char* p = text; ; p++) {
        if (*p == '\n') paragraphs++;
        if (*p == '\0') { paragraphs++; break; } // last paragraph (even without trailing '\n')
    }

    char**** document = (char****)malloc(paragraphs * sizeof(char***));
    char* start = text;
    int pi = 0;

    for (char* p = text; ; p++) {
        if (*p == '\n' || *p == '\0') {
            size_t len = (size_t)(p - start);
            // Extract paragraph substring
            char* para_buf = strndup_c(start, len);

            int scount = 0;
            char*** sentences = split_sentences(para_buf, &scount);

            // Allocate paragraph (array of sentences)
            char*** paragraph = (char***)malloc(scount * sizeof(char**));
            for (int i = 0; i < scount; i++) {
                paragraph[i] = sentences[i];
            }
            free(sentences);

            document[pi++] = paragraph;

            free(para_buf);
            if (*p == '\0') break;
            start = p + 1; // next paragraph starts after '\n'
        }
    }

    return document;
}

// Return kth word (1-based) in mth sentence of nth paragraph
char* kth_word_in_mth_sentence_of_nth_paragraph(char**** document, int k, int m, int n) {
    return document[n - 1][m - 1][k - 1];
}

// Return kth sentence (1-based) in mth paragraph
char** kth_sentence_in_mth_paragraph(char**** document, int k, int m) {
    return document[m - 1][k - 1];
}

// Return kth paragraph (1-based)
char*** kth_paragraph(char**** document, int k) {
    return document[k - 1];
}



char* get_input_text() {	
    int paragraph_count;
    scanf("%d", &paragraph_count);

    char p[MAX_PARAGRAPHS][MAX_CHARACTERS], doc[MAX_CHARACTERS];
    memset(doc, 0, sizeof(doc));
    getchar();
    for (int i = 0; i < paragraph_count; i++) {
        scanf("%[^\n]%*c", p[i]);
        strcat(doc, p[i]);
        if (i != paragraph_count - 1)
            strcat(doc, "\n");
    }

    char* returnDoc = (char*)malloc((strlen (doc)+1) * (sizeof(char)));
    strcpy(returnDoc, doc);
    return returnDoc;
}

void print_word(char* word) {
    printf("%s", word);
}

void print_sentence(char** sentence) {
    int word_count;
    scanf("%d", &word_count);
    for(int i = 0; i < word_count; i++){
        printf("%s", sentence[i]);
        if( i != word_count - 1)
            printf(" ");
    }
} 

void print_paragraph(char*** paragraph) {
    int sentence_count;
    scanf("%d", &sentence_count);
    for (int i = 0; i < sentence_count; i++) {
        print_sentence(*(paragraph + i));
        printf(".");
    }
}

int main() 
{
    char* text = get_input_text();
    char**** document = get_document(text);

    int q;
    scanf("%d", &q);

    while (q--) {
        int type;
        scanf("%d", &type);

        if (type == 3){
            int k, m, n;
            scanf("%d %d %d", &k, &m, &n);
            char* word = kth_word_in_mth_sentence_of_nth_paragraph(document, k, m, n);
            print_word(word);
        }

        else if (type == 2){
            int k, m;
            scanf("%d %d", &k, &m);
            char** sentence = kth_sentence_in_mth_paragraph(document, k, m);
            print_sentence(sentence);
        }

        else{
            int k;
            scanf("%d", &k);
            char*** paragraph = kth_paragraph(document, k);
            print_paragraph(paragraph);
        }
        printf("\n");
    }     
}
