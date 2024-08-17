#include <stdio.h>
#include <ctype.h>
int main() {
    FILE *file;
    char ch;

    file = fopen("Exp8.txt", "w");

    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    int vowels = 0, consonants = 0, digits = 0, spaces = 0;

    while ((ch = fgetc(file)) != EOF) {
        if (isalpha(ch)) {
            // Check for vowels and consonants
            ch = tolower(ch);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        } else if (isdigit(ch)) {
            // Check for digits
            digits++;
        } else if (isspace(ch)) {
            // Check for spaces
            spaces++;
        }
    }

    fclose(file);

    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);
    printf("Number of digits: %d\n", digits);
    printf("Number of spaces: %d\n", spaces);

    return 0;
}