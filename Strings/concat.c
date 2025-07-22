#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000];
    printf("Enter the first string: ");
    scanf("%s", str);

    char str1[1000];
    printf("Enter the second string: ");
    scanf("%s", str1);

    char res[2000]; // Ensure size can hold both strings
    strcpy(res, str);    // Copy first string into res
    strcat(res, str1);   // Concatenate second string to res

    printf("Concatenated string is: %s\n", res);
    return 0;
}
