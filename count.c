#include<stdio.h>
int main(){
    int arr[7]={1,2,3,4,5,6,7};
    int even=0;
    int odd=0; 
    for(int i=0;i<7;i++)
    {
        if(arr[i]!=0)
        {
            if(arr[i]%2==0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
    }
    printf("Even elements: %d\n", even);
    printf("Odd elements: %d\n", odd);
    return 0;

}
  