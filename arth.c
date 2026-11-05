#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("sum is:%d\n",c);

    c=a-b;
    printf("difference is:%d\n",c);

    c=a*b;
    printf("product is:%d\n",c);

    c=a/b;
    printf("quotient is:%d\n",c);
     
    c=a%b;
    printf("remainder is:%d\n",c);
return 0;
}