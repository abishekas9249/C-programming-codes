#include<stdio.h>
int main()
{
    int col,i,j,mat[10][10];
    scanf("%d",&col);
    for(i=0;i<col;i++)
        for(j=0;j<col;j++)
            scanf("%d",&mat[i][j]);
    col=col/2;
    printf("%d\t",mat[col][col]);
    printf("%d\t",mat[col-1][col]);
    printf("%d\t",mat[col-1][col+1]);
    printf("%d\t",mat[col][col+1]);
    printf("%d\t",mat[col+1][col+1]);
    printf("%d\t",mat[col+1][col]);
    printf("%d\t",mat[col+1][col-1]);
    printf("%d\t",mat[col][col-1]);
    printf("%d\t",mat[col-1][col-1]);
    if(col>=2)
    {
        printf("%d\t",mat[col-2][col-1]);
        printf("%d\t",mat[col-2][col]);
        printf("%d\t",mat[col-2][col+1]);
        printf("%d\t",mat[col-2][col+2]);
        printf("%d\t",mat[col-1][col+2]);
        printf("%d\t",mat[col][col+2]);
        printf("%d\t",mat[col+1][col+2]);
        printf("%d\t",mat[col+2][col+2]);
        printf("%d\t",mat[col+2][col+1]);
        printf("%d\t",mat[col+2][col]);
        printf("%d\t",mat[col+2][col-1]);
        printf("%d\t",mat[col+2][col-2]);
        printf("%d\t",mat[col+1][col-2]);
        printf("%d\t",mat[col][col-2]);
        printf("%d\t",mat[col-1][col-2]);
        printf("%d\t",mat[col-2][col-2]);
    }
    if(col>=3)
    {
        printf("%d\t",mat[col-3][col-2]);
        printf("%d\t",mat[col-3][col-1]);
        printf("%d\t",mat[col-3][col]);
        printf("%d\t",mat[col-3][col+1]);
        printf("%d\t",mat[col-3][col+2]);
        printf("%d\t",mat[col-3][col+3]);
        printf("%d\t",mat[col-2][col+3]);
        printf("%d\t",mat[col-1][col+3]);
        printf("%d\t",mat[col][col+3]);
        printf("%d\t",mat[col+1][col+3]);
        printf("%d\t",mat[col+2][col+3]);
        printf("%d\t",mat[col+3][col+3]);
        printf("%d\t",mat[col+3][col+2]);
        printf("%d\t",mat[col+3][col+1]);
        printf("%d\t",mat[col+3][col]);
        printf("%d\t",mat[col+3][col-1]);
        printf("%d\t",mat[col+3][col-2]);
        printf("%d\t",mat[col+3][col-3]);
        printf("%d\t",mat[col+2][col-3]);
        printf("%d\t",mat[col+1][col-3]);
        printf("%d\t",mat[col][col-3]);
        printf("%d\t",mat[col-1][col-3]);
        printf("%d\t",mat[col-2][col-3]);
        printf("%d\t",mat[col-3][col-3]);
    }
    if(col>=4)
    {
        printf("%d\t",mat[col-4][col-3]);
        printf("%d\t",mat[col-4][col-2]);
        printf("%d\t",mat[col-4][col-1]);
        printf("%d\t",mat[col-4][col]);
        printf("%d\t",mat[col-4][col+1]);
        printf("%d\t",mat[col-4][col+2]);
        printf("%d\t",mat[col-4][col+3]);
        printf("%d\t",mat[col-4][col+4]);
        printf("%d\t",mat[col-3][col+4]);
        printf("%d\t",mat[col-2][col+4]);
        printf("%d\t",mat[col-1][col+4]);
        printf("%d\t",mat[col][col+4]);
        printf("%d\t",mat[col+1][col+4]);
        printf("%d\t",mat[col+2][col+4]);
        printf("%d\t",mat[col+3][col+4]);
        printf("%d\t",mat[col+4][col+4]);
        printf("%d\t",mat[col+4][col+3]);
        printf("%d\t",mat[col+4][col+2]);
        printf("%d\t",mat[col+4][col+1]);
        printf("%d\t",mat[col+4][col]);
        printf("%d\t",mat[col+4][col-1]);
        printf("%d\t",mat[col+4][col-2]);
        printf("%d\t",mat[col+4][col-3]);
        printf("%d\t",mat[col+4][col-4]);
        printf("%d\t",mat[col+3][col-4]);
        printf("%d\t",mat[col+2][col-4]);
        printf("%d\t",mat[col+1][col-4]);
        printf("%d\t",mat[col][col-4]);
        printf("%d\t",mat[col-1][col-4]);
        printf("%d\t",mat[col-2][col-4]);
        printf("%d\t",mat[col-3][col-4]);
        printf("%d\t",mat[col-4][col-4]);
    }
    return 0;
}
