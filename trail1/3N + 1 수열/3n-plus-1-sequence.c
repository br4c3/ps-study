#include <stdio.h>

int N;

int main() {
    scanf("%d", &N);

    int cnt = 0;
    while (!(N == 1))
    {
        if (N%2 == 0)
        {
            N/=2;
        } else {
            N = N*3+1;
        }
        cnt++;
    }
    printf("%d", cnt);
    // Please write your code here.
    return 0;
}