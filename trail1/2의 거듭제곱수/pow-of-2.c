#include <stdio.h>

int N;
int main() {
    scanf("%d", &N);

    int cnt = 0;
    while (N%2 == 0)
    {
        N /= 2;
        cnt++;
    }
    printf("%d", cnt);

    return 0;
}