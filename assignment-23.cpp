#include <stdio.h>

int main() {
    char ch;
    printf("Enter a letter: ");
    scanf(" %c", &ch); 
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        if (ch == 'a' || ch == 'A')
            printf("It is a vowel.\n");
        else if (ch == 'e' || ch == 'E')
            printf("It is a vowel.\n");
        else if (ch == 'i' || ch == 'I')
            printf("It is a vowel.\n");
        else if (ch == 'o' || ch == 'O')
            printf("It is a vowel.\n");
        else if (ch == 'u' || ch == 'U')
            printf("It is a vowel.\n");
        else
            printf("It is a consonant.\n");
    }
    else {
        printf("Invalid input. Please enter an alphabet letter.\n");
    }

    return 0;
}
