#include<stdio.h>
int main(){
    int arr[5]={10,20,30,40,50};
    int temp;
    int start=0;
    int end =4;
    
        while(start<end){
temp=arr[start];
arr[start]=arr[end];
arr[end]=temp;
            start++;
            end--;

        }
        for(int i=0;i<5;i++){
            printf("%d ",arr[i]);
        }
    }
    return 0;

}