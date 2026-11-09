#include<stdio.h>
int main(){
    int array[6]={11,22,33,44,55,66};
    for(int i=6;i>0;i--){
        printf("%d\n",array[i-1]);
    }
    return 0;
}