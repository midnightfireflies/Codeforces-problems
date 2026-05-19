#include <stdio.h>


int main() {
    int t;
    
    if (scanf("%d", &t) == 1) {
        for (int i = 1; i <= t; i++) {
            
    long long n, original, reversed = 0, remainder;
    
    scanf("%lld", &n);
    
    original = n;

    while (n > 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }
    
    if (original == reversed) {
        printf("Case %d: Yes\n", i);
    } else {
        printf("Case %d: No\n", i);
    }
        
        }
    }
    return 0;
}


