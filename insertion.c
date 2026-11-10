#include<stdio.h>
int main(){
    int arr[6]={2,3,4,5,7};
    int i=0;
    int n=5;
    int pos=3;
    int val=6;
    for(int i=n;i>pos;i--){
        arr[i]=arr[i-1];
    }
   arr[pos]=val;
   n++;
   for(int i=0;i<n;i++){
       printf("%d ",arr[i]);
   }
    return 0;
}