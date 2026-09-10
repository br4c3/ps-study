#include <stdio.h>
#include <math.h>

int solve(int x)
{
    if (x == 0) return 0;
    return pow(x%10, 2) + solve(x/10);
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", solve(n));
    return 0;
}