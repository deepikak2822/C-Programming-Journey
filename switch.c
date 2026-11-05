#include<stdio.h>
int main(){
    int a,b;
    printf("enter a number:\n");
    scanf("%d %d",&a,&b);
    int choice;
    printf("enter your choice (1-4):\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("sum is: %d\n",a+b);
break;
        case 2:
       
        printf("difference is: %d\n",a-b);
break;

        case 3:
        
        printf("product is: %d\n",a*b);
break;

        case 4:
        printf("quotient is: %d\n",a/b);
break;
        default:
        printf("invalid input\n");
    }
    return 0;
}