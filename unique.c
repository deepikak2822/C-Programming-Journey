#include<stdio.h>
int main(){
    int arr[6]={4,4,5,6,6,7};
    int unique[6];
    int count = 0;
    int found;
    for(int i = 0; i < 6; i++)
{
    found = 0;

    for(int j = 0; j < count; j++)
    {
        if(arr[i] == unique[j])
        {
            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        unique[count] = arr[i];
        count++;
    }
}
printf("Unique elements: ");

for(int i = 0; i < count; i++)
{
    printf("%d ", unique[i]);
}

printf("\n");
return 0;

}