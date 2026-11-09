#include<stdio.h>
int main(){
    int arr[3]={4,3,6};
    if(arr[0]>arr[1] && arr[0]>arr[2])
    {
        printf("%d is greater\n",arr[0]);
    }
    else if(arr[1]>arr[0] && arr[1]>arr[2])
    {
        printf("%d is greater\n",arr[1]);
    }
    else{
        printf("%d is greater\n",arr[2]);
    }
    return 0;
}