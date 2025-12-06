#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, vowels = 0, consonants = 0, digits = 0, spaces = 0, special_symbols = 0,lower_cases=0,upper_cases=0;

    printf("\n Enter a string:");
    gets(str);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'A' ||
            str[i] == 'e' || str[i] == 'E' ||
            str[i] == 'i' || str[i] == 'I' ||
            str[i] == 'o' || str[i] == 'O' ||
            str[i] == 'u' || str[i] == 'U')
        {
            vowels++;
        }
        /*else*/ if ((str[i] >= 'a' && str[i] <= 'z') ||
                 (str[i] >= 'A' && str[i] <= 'Z'))
        {
            consonants++;
        }
        /*else*/ if (str[i] >= '0' && str[i] <= '9')
        {
            digits++;
        }
           if (str[i] == ' ')
        {
            spaces++;
        }
        
        else
        {
            special_symbols++;
        }
    }

    printf("\n No. of vowels are %d", vowels);
    printf("\n No. of consonants are %d", consonants);
    printf("\n No. of digits are %d", digits);
    printf("\n No. of spaces are %d", spaces);
    printf("\n No. of special symbols are %d", special_symbols);
    
    

    return 0;
}
