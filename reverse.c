#include<stdio.h>
#include<conio.h>
int main()
{
    //reverse a number
    int a;
    printf("enter the number:");
    scanf("%d",&a);
    int sum=0;
    while(a>0)
    {
        int temp=a%10;
        sum=sum*10+temp;
        a=a/10;
    }
    printf("Reversed number is:%d",sum);
    return 0;
}