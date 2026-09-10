#include <stdio.h>

int solve(int n)
{
    if (n == 1) return 0;
    if (n%2 == 0) return 1 + solve(n/2);
    return 1+solve(n/3);
}


int main() {
    int n;
    scanf("%d", &n);

    printf("%d", solve(n));

    return 0;
}