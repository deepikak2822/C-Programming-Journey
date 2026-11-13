
#include <stdio.h>

int main()
{
    int arr[5] = {1, 3, 2, 4, 1};
    int visited[5] = {0};
    int count;

    for(int i = 0; i < 5; i++)
    {
        if(visited[i] == 1)
        {
            continue;
        }

        count = 0;

        for(int j = 0; j < 5; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                visited[j] = 1;
            }
        }

        printf("Frequency of %d is %d\n", arr[i], count);
    }

    return 0;
}
