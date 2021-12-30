#include<stdio.h>
#include<ctype.h>
int findupper(int num)
{
    if(num>=65 && num<=91)
    {
        return num;
    }

}
int main()
{
    int m,b,c;
    char d[50];
    printf("Enter a letter to find its uppercase : ");
    scanf("%c",d);

    printf("upper case letter is :");
    puts(strupr(d));
    printf("\n");
    printf("Enter number between 65 and 91  :");
    scanf("%d",&m);
    printf("\n");
if (m>=65&&m<=91)
    {
        b=findupper(m);
        printf("%d is uppercase letter corresponding to %c",b,m);
    }


    return 0;

}
