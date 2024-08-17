// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     FILE *ptr;
//     char ch;
//     char str[23] = "Chaitanya Zunzurkar";

//     ptr = fopen("Bill.txt", "a+");

//     if (ptr == NULL)
//     {
//         printf("Error opening File.\n");
//         return 1; // Exit the program if file opening fails
//     }

//     while ((ch = fgetc(ptr)) != EOF)
//     {
//         if (ch >= 'A' && ch <= 'Z')
//         {
//             ch = toupper(ch);
//         }
//         else if (ch >= 'a' && ch <= 'z')
//         {
//             ch = tolower(ch);
//         }
//         else
//         {
//             continue;
//         }
//         fseek(ptr, -1, SEEK_CUR);
//         fputc(ch, ptr);
//     }

//     fclose(ptr);

//     ptr = fopen("Bill.txt", "a"); // Open the file in append mode for writing

//     if (ptr == NULL)
//     {
//         printf("Error opening File.\n");
//         return 1; // Exit the program if file opening fails
//     }

//     fprintf(ptr, "%s", str);

//     fclose(ptr);

//     printf("Code run successfully.\n");
//     return 0;
// }
#include <stdio.h>
#include <ctype.h>

// Function to convert case of each character in a string
void convertCase(char str[]) {
    for (int i = 0; str[i] != '\0'; ++i) {
        if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        } else if (islower(str[i])) {
            str[i] = toupper(str[i]);
        }
    }
}

int main() {
    char inputString[100];

    // Input string from the user
    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    // Remove newline character if present
    if (inputString[strlen(inputString) - 1] == '\n') {
        inputString[strlen(inputString) - 1] = '\0';
    }

    // Call the function to convert the case
    convertCase(inputString);

    // Display the modified string
    printf("String after case conversion: %s\n", inputString);

    return 0;
}
