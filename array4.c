#include<stdio.h>
int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        printf("enter the array elements %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    int min =arr[0];
    for(int i=1;i<5;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    printf("the smallest element is %d:",min);
    return 0;
}