#include <stdio.h>

int main()
{
    int n, arr[15], i = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 0)
    {
        arr[i] = n % 10;
        n = n / 10;
        i++;
    }

    printf("Digits are:");

    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d ", arr[j]);
    }

    return 0;
}