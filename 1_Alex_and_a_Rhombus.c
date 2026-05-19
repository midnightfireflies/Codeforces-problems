#include<stdio.h>

int main(){
    int n, result;
    scanf("%d", &n);
    if(n>=1){
        result = 1 + 4 * ((n-1) * n / 2);
    }
    else return -1;

    printf("%d\n", result);

    return 0;
}