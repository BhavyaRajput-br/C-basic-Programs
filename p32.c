#include <stdio.h>

int main() {
    char ch;

    printf("Enter any alphabet: ");
    scanf("%c", &ch);

    switch (ch) {
        // Grouping lowercase and uppercase vowels together
        case 'a': case 'A':
        case 'e': case 'E':
        case 'i': case 'I':
        case 'o': case 'O':
        case 'u': case 'U':
            printf("%c is a Vowel.\n", ch);
            break;
            
        default:
            // Checking if the input is actually an alphabet
            if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
                printf("%c is a Consonant.\n", ch);
            } else {
                printf("%c is not a valid alphabet letter.\n", ch);
            }
    }

    return 0;
}

