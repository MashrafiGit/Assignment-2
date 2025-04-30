#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n;
    int v;
    scanf("%d", &n);

    int sumOfPositive = 0;
    int sumOfNegative = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &v);

        if (v > 0)
        {
            sumOfPositive += v;
        }
        if (v < 0)
        {
            sumOfNegative += v;
        }
    }

    printf("%d ", sumOfPositive);
    printf("%d", sumOfNegative);

    return 0;
}
