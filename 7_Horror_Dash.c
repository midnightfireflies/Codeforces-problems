#include <stdio.h>
int maximum(int arr[], int n)
{
    int maximum = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maximum)
        {
            maximum = arr[i];
        }
    }
    return maximum;
}
int linearSearch(int a[], int n, int key)
{
    int found = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int T, key, found;
    scanf("%d", &T);
        for (int i = 0; i < T; i++)
        {
            int n;
            scanf("%d", &n);
            int arr[n];
            for (int j = 0; j < n; j++)
            {
                scanf("%d", &arr[j]);
            }
            key = maximum(arr, n);

            found = linearSearch(arr, n, key);
            if (found != -1)
            {
                printf("Case %d: %d\n", i+1, key);
            }
            else
            {
                printf("Not Found\n");
            }
        }

        return 0;
    }