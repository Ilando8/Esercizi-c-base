#include <stdio.h>
#include <stdlib.h>
#define M 3
#define N 4

int main()
{
    int m[N][M], i, j, k=0;

    for (i=0; i<N; i++)
        for(j=0; j<M; j++)
        {
            printf("Riga %d - Colonna %d: ", i, j);
            scanf("%d", &m[i][j]);
        }

    for (i=0; i<N; i++)
        for(j=0; j<M; j++)
        {
            if (m[i][j]%3==0)
                k++;
            else
                k=0;
        }

    printf("%d \n", k);

    return 0;
}
