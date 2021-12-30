
#include<stdio.h>
void input(int matrix[][5],int);
void display(int matrix[][5],int);
void upper_half(int matrix[][5],int);
int main()


{

    int array[5][5];
    int n;
    printf("enter size of matrix");
    scanf("%d",&n);

    input(array,n);
    printf("\n");

    display (array,n);
    printf("\n");

    upper_half(array,n);
    printf("\n");
    return 0;
}

void input(int matrix[][5],int n)
{

    int i,j;
    for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
                {
                    printf("enter data");
                    scanf("%d",&matrix[i][j]);
                }
        }
}


void display(int matrix[][5],int n)
{
    int i,j;
    for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
                {
                    printf("%d\t",matrix[i][j]);
                }
    printf("\n");
        }
}


void upper_half(int matrix[][5],int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)

            {
                if (i<=j)
                            {
                                printf("%d\t",matrix[i][j]);
                            }
                else
                        {

                            printf("\t");
                        }
            }
printf("\n");
}
}
