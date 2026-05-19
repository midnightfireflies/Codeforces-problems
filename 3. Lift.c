#include <stdio.h>
#include <stdlib.h>


int main() {
    
    int n, N, R, total = 0;
    scanf("%d", &n);
     for(int i = 1; i <= n; i++) {
        scanf("%d %d", &R, &N);
        total = abs(R - N)*4 + 3+ 5+ 3+ R*4 + 3+ 5;
        printf("Case %d: %d\n", i, total);}
        


    return 0;
}