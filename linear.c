#include<stdio.h>

int main()
{
    int arr[6]={5,15,25,35,45,55};
    int key=89;
    int found=0;

    for(int i=0;i<6;i++)
    {
        if(arr[i]==key)
        {
            printf("Element found at index %d\n",i);
            found=1;
            break;
        }
    }

    if(found==0)
    {
        printf("Element not found\n");
    }

    return 0;
}