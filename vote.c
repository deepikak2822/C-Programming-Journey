#include<stdio.h>
int main(){
    int i;
    printf("Enter your age:");
    scanf("%d",&i);
    if (i>=18)
    {
        printf("eligible for voting\n");
    }
    else
    {
        printf("not eligible for voting\n");
    }
    return 0;
}