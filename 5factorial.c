#include<stdio.h>
void factorial(int num)
{
    int counter,fact=1;
    if(num==0)
        {
            printf("factorial of 0 is 1");
        }
    else
        {
            for(counter=1;counter<=num;counter++)
            {
                fact = fact * counter;
            }
        printf("factorial of %d is %d ",num,fact);
        }
}
int main()
{
    int number;
    printf("enter number to find factorial");
    scanf("%d",&number);
    factorial(number);


}
