#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *ptr;
    char ch;
    ptr = fopen("BillGenarator.txt", "a");

    if (ptr == NULL)
    {
        printf("Error opening File.\n");
    }

    while (ch = fgetc(ptr) != EOF)
    {
        if (ch >= 'A' && ch == 'Z')
        {
            ch += 32;
        }
        else if (ch >= 'a' && ch <= 'z')
        {
            ch -= 32;
        }
        else
        {
            continue;
        }
    }
    char str[23] = "Chiatnaya Zunzurkar";
    while (ch = fgetc(ptr) != EOF)
    {
        fputc(ch, ptr);
        fprintf(ptr, str);
    }
    fclose(ptr);
    printf("Code run successfully.\n");
    return 0;
}
