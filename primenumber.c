#include <stdio.h>

int main() 
{
    int a;
    printf("Enter a number to check if it is prime: ");
    scanf("%d", &a);
    if (a <= 1) 
    {
        printf("Not a prime number\n");
        return 0;
    }
    int count = 0;
    for (int i = 1; i <= a; i++) 
    {
        if (a % i == 0) 
        {
            count++;
        }
    }
    if (count == 2) 
    {
        printf("It is a prime number\n");
    } else 
    {
        printf("Not a prime number\n");
    }
    return 0;
}