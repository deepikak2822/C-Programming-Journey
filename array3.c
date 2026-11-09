#include<stdio.h>
int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        printf("enter the array elements %d: ",i+1);
        scanf("%d",&arr[i]);
    }

    int max=arr[0];
    for(int i=1;i<5;i++)
    {
    if(arr[i]>max)
    {
        max=arr[i];
    }
    }
    printf("the largest element is %d:",max);
    return 0;

}
