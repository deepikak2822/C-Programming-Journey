#include<stdio.h>
int main(){
    int i;
    printf("Enter a numbers:");
    scanf("%d",&i);
    if(i>=10 && i<=50)
{
    printf("number is btween 10 and 50\n");
}
else{
    printf("number is not between 10 and 50\n");
}
    return 0;

}