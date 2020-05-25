#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[20], i, j, k, n;

    printf("\nEnter array size: ");
    scanf("%d", &n);

    printf("\nEnter %d array element: ", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\nOriginal array is: ");
    for(i = 0; i < n; i++)
    {
        printf(" %d", a[i]);
    }

    printf("\nNew array is: ");
    for(i = 0; i < n; i++)
    {
        for(j = i+1; j < n; j++)
        {
            if(a[j] == a[i])
            {
                for(k = j; k < n; k++)
                {
                    a[k] = a[k+1];
                }
                n--;
            }

        }
    }

    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
