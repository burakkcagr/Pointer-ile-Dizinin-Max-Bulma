#include <stdio.h>

int getmax(int* pi, size_t size)
{
    int max = pi[0];

    for (size_t i = 1; i < size; ++i)
        if (pi[i] > max)
            max = pi[i];

    return max;
}

int main(void)
{
    int a[10] = { 45, 23, 11, 67, 21, 7, 32, 76, 22, 47 };
    int max;

    max = getmax(a, 10);
    printf("%d\n", max);

    return 0;
}
