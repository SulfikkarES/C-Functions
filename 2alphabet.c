#include<stdio.h>
char findchar(char chh)
(

    char chh;
    if(chh>=a && chh<=z)
        {
            printf("%c is alphabet",chh);
            return chh;
        )
    if else(chh>=A && chh<= Z)
        {
            printf("%c is alphabet",chh);
            return chh;
        }
    if else(chh>=0 && ch<=9)
    {
        printf("%c is digits",chh);
        return chh;
    }
    else
    {
        printf("%c is special character",chh);
        return chh;
    }
 }
int main()
{
    char mychara;
    printf("Enter any charater");
    scanf("%c",&mychara);
    findchar(mychara);
}
