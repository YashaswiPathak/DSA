#include <stdio.h>

int main()
{
 int a[5] = {5, 3, 4, 1, 2};
    int i, j, key;
    for(i = 1; i < 5; i++)
    {
        key = a[i];
        for(j = i-1; j >= 0 && a[j] > key; j--)
        {
            a[j+1] = a[j];
        }

        a[j+1] = key;
    }
    for(i = 0; i < 5; i++)
        printf("%d ", a[i]);
         return 0;
}