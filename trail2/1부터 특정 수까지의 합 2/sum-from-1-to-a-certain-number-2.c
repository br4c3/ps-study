#include <stdio.h>

int plus(int x)
{
    if (x == 1) return 1;
    return x + plus(x-1);
}

int main() {
    int n;
    scanf("%d", &n);
    
    printf("%d", plus(n));

    return 0;
}