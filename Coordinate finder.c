#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d", &n);
    int **mat = (int**) malloc(sizeof(int*) * n);
    for (int i = 0; i < n; i++)
    {
        *(mat + i) = (int*) malloc(sizeof(int) * n);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &(*(*(mat + j) + i)));
        }
    }
    int num;
    int checker = 0;
    scanf("%d", &num);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (*(*(mat + j) + i) == num)
            {
                printf("%d %d", i, j);
                checker = 1;
                break;
            }
        }
        if (checker == 1)
        {
            break;
        }
    }
    if (checker == 0)
    {
        printf("not found");
    }
}