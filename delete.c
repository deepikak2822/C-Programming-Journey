#include<stdio.h>
int main(){
    int arr[4]={3,4,3,2};
    int i=0;
    int n=4;
    int pos=3;
    for(int i=pos;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    n--;
    for(int i=0;i<n;i++){
        printf(" %d ",arr[i]);
    }
    return 0;
}