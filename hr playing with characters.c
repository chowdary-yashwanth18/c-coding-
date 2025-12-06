#include <stdio.h>

int main() {
    char ch;
    char str[100];
    char sentence[100];

   
    scanf("%c", &ch);         
    scanf("%s", str);          
    getchar();                 
    fgets(sentence, sizeof(sentence), stdin);

    
    int i = 0;
    while (sentence[i] != '\0') {
        if (sentence[i] == '\n') {
            sentence[i] = '\0';
            break;
        }
        i++;
    }

    // Print outputs
    printf("%c\n", ch);
    printf("%s\n", str);
    printf("%s\n", sentence);

    return 0;
}

