#include <stdio.h>

int N, M;
int main() {
    scanf("%d %d", &N, &M);

    for (int j = 0; j < N; ++j)
    {
        for (int i = 1; i <= M; ++i)
        {
            printf("%d ", j*M+i);
        }
        printf("\n");
    }

    return 0;
}