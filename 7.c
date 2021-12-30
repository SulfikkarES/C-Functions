
#include<stdio.h>
void input(int matrix[10][10],int row,int column)
{

    int i,j;
    for(i = 1;i <=row; i++)
        {
            for(j = 1;j <= column;j++)
               {
                   printf("Enter Element of %d %d : ",i,j);
                   scanf("%d",&matrix[i][j]);

                }
        }


}

void display(int Amatrix[10][10],int row,int column)

{

    int i,j;
    for(i = 1; i <= row; i++)
        {
            for(j = 1;j <= column ;j++)
                {
                    printf(" %d \t",Amatrix[i][j]);
                }
    printf("\n");
        }
}


void sum(int matrix[10][10],int row,int column)

{
    int i,j;
    printf("Sum of matrix is:");
    int sum = 0;
for(i = 1;i <= row;i++)
        {
            for(j = 1;j <= column;j++)
                {
                    sum = sum +matrix[j][i];

                }
        }
printf(": %d",sum);
}

int rowsum(int matrix[10][10],int row,int col)

{
    int i,j;
    for(i =1; i <= row; i++)
    {

        int row_sum=0;

            for(j = 1; j <= col; j++)
                {

                    row_sum += matrix[i][j];

                }
        printf("\n  sum of row %d is %d ",i,row_sum);
    }

}



void columnsum(int matrix[10][10],int row,int col)
{
    int i,j;

    for(i = 1; i <= row;i++)
    {
    int column_sum = 0;
    for(j = 1; j <= col;j++)
                {
                    column_sum += matrix[j][i];
                }
            printf("\n  sum of column %d is %d",i,column_sum);
    }

}



void transpose(int matrix[10][10],int row,int col)
{
    int Amatrix[10][10];
    int i,j;
    for(i = 1; i <= row; i++)
        {
            for(j = 1;j <= col; j++)
                {
                    Amatrix[j][i]=matrix[j][i];

                }
        }
printf(" Transpose of matrix is  \n");
printf("\n");
      for(i = 1; i <= row ;i++)
        {
            for(j = 1;j <= col ;j++)
                {
                    matrix[i][j] = matrix[j][i];
                    printf("\t %d ",Amatrix[j][i]);
                }
    printf("\n");
        }


}


int main()
{


    int row,col,array1[10][10],array2[10][10];
    printf("enter number of rows");
    scanf("%d",&row);
    printf("\n");
    printf("enter number of columns");
    scanf("%d",&col);



   input(array1,row,col);
   printf("\n");

    display(array1,row,col);
    printf("\n");

    sum(array1,row,col);
    printf("\n");

    rowsum(array1,row,col);
    printf("\n");

    columnsum(array1,row,col);
    printf("\n");

    transpose(array1,row,col);
    printf("\n");

    return 0;

}



