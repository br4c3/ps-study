#include <stdio.h>

int solve(int n)
{
    if (n==1 | n==2) return 1;
    return solve(n-1) + solve(n-2);
}

int main() {
    int n;
    scanf("%d", &n);
    
    printf("%d", solve(n));

    return 0;
}