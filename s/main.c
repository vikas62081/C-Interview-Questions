#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 1, y = 0, z = 5;
        int a = x && y || z++;
        printf("%d", z);
        return 0;
}
