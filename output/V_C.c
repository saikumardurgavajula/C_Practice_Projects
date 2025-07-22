#include <stdio.h>
#include <string.h> 

int main() {
    char myString[1000];
    printf("Enter the string: ");
    fgets(myString, sizeof(myString), stdin);
    myString[strcspn(myString, "\n")] = 0;
    printf("String is: %s\n", myString);
    return 0;
}