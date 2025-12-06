#include <stdio.h>
#include <string.h>

// Function to get value of a Roman numeral character
int value(char c) {
    switch(c) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return 0;
    }
}

// Function to convert Roman numeral to integer
int romanToInt(char *s) {
    int total = 0;
    int len = strlen(s);

    for (int i = 0; i < len; i++) {
        int curr = value(s[i]);
        int next = (i + 1 < len) ? value(s[i + 1]) : 0;

        if (curr < next) {
            total -= curr;  // subtract if smaller before larger
        } else {
            total += curr;
        }
    }
    return total;
}

int main() {
    char s1[] = "III";
    char s2[] = "LVIII";
    char s3[] = "MCMXCIV";

    printf("%s -> %d\n", s1, romanToInt(s1));     // Output: 3
    printf("%s -> %d\n", s2, romanToInt(s2));     // Output: 58
    printf("%s -> %d\n", s3, romanToInt(s3));     // Output: 1994

    return 0;
}
