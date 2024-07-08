#include <stdio.h>
#include <stdlib.h>
#define row 3
#define col 3
int paths(int i, int j)
{
    int **Matrix = (int**)malloc(sizeof(int*) * row );
    for(int k = 0; k <= col; k++)
    {
        Matrix[k] = (int*)malloc(sizeof(int*) * col);
    }
    int count = 0;
    int right,up = 0;

    for(right = 0;right <= i; right++)
    {
        for(up = 0; up <= j; up++)
        {
            if(Matrix[right][up] == Matrix[i][j])
            {
                count++;
                break;
            }
        }
    }
    return count;
}

int main()
{
    int i = 2;
    int j = 1;
    int result = paths(i,j);
    printf("%d\n",result);



    return 0 ;
}