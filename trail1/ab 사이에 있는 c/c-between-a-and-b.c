#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    int tmp = c;
    int idx = 1;
    while (tmp < b)
    {
        if (a <= tmp & tmp <= b)
        {
            printf("YES");
            return 0;
        }
        tmp = c*(++idx);
    }
    printf("NO");

    return 0;
}