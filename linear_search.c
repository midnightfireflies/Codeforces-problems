#include <stdio.h>

int linearSearch(int a[], int n, int key){
    int found = 0;
    for(int i=0; i<n; i++){
        if(a[i]==key){
            return i;
        }
    }
    return -1;
}
int main() {
    int key,n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    scanf("%d", &key);

    int result = linearSearch(arr ,n, key);

    
    if(result>=1){
        printf("Found at index %d\n", result);
    }else
    {
        printf("Not Found\n");
    }

    return 0;
}