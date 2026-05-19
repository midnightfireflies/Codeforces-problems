#include <stdio.h>
#include <math.h>
#define min(a, b) ((a) < (b) ? (a) : (b))

int main() {
    int n,b,p,f,h,c;

    scanf("%d", &n);
    for(int i = 1; i <= n; i++) {
        scanf("%d %d %d %d %d", &b, &p, &f, &h, &c);
        
        int burger = b/2;
        int hamburger_count, chicken_count;
        
        if(h > c) {
            // Hamburger is more expensive - prioritize it
            hamburger_count = min(burger, p);
            chicken_count = min(burger - hamburger_count, f);
        } else {
            // Chicken burger is more expensive - prioritize it
            chicken_count = min(burger, f);
            hamburger_count = min(burger - chicken_count, p);
        }
        
        int total = hamburger_count * h + chicken_count * c;
        printf("%d\n", total);
    }

    return 0;
}