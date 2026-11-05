#include<stdio.h>

int main()
{
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("even number\n");
    }
        else
        {
        printf("odd number\n");
    }

    return 0;
}