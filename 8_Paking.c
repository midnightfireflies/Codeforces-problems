#include <stdio.h>
#include <stdlib.h>
int min_max (int arr[], int n){
    int max_val = arr[0];
    int min_val = arr[0];

    for( int i=0; i<n; i++){
        if(arr[i]<min_val){
            min_val = arr[i];
        }
        if(arr[i]>max_val){
            max_val = arr[i];
        }
    }
    int result = (max_val - min_val) * 2;
    return result;
}
int main() {
     int T;
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
            int res = min_max(arr, n);
            printf("%d\n", res);
        }

        return 0;
    return 0;
}