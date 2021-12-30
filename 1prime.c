#include<stdio.h>

int isPrime(int);
int main()

{

    int n;
    for(n=200;n<+500;n++)
    {
        if (isPrime(n))
        {
            printf("%d\n",n);
        }
    }

return 0;
}

 isPrime(int number)
{
    int i;

    for(i=2;i<number;i++)
        {
            if(number%i==0)
                {
                    return 0;

                }
        }
return 1;
}
