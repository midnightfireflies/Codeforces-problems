#include <stdio.h>

int BinarySearch(int a[], int n, int key)
{
    int low = 0, high = n - 1;
    int mid = (high + low) / 2;
    for (int i = 0; i < n; i++)
    {
        while (low <= high)
        {
            if (a[mid] == key)
                return mid;
            else if (a[mid] < key)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        return i;
    }

    return -1;
}

int main()
{
    int key, n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &key);

    int result = BinarySearch(arr, n, key);

    if (result >= 0)
    {
        printf("Found at index %d\n", result);
    }
    else
    {
        printf("Not Found\n");
    }

    return 0;
}