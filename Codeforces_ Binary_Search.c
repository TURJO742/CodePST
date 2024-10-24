#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100000


int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main()
{
    int N, Q;


    scanf("%d %d", &N, &Q);

    int A[MAX_SIZE];


    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }


    qsort(A, N, sizeof(int), compare);


    for (int i = 0; i < Q; i++)
    {
        int X;
        scanf("%d", &X);


        if (bsearch(&X, A, N, sizeof(int), compare))
        {
            printf("found\n");
        }
        else
        {
            printf("not found\n");
        }
    }

    return 0;
}
