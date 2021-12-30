#include<stdio.h>
#include<ctype.h>
int main()

{

    char b;
    printf("enter a character : ");
    scanf("%c",&b);

    if (isalpha(b))

            printf("%c is a alphabet",b);

    else if (isdigit(b))
        {
            printf("%c is a digit",b);
        }
    else
        {
            printf("%c is a special character",b);
        }
    return 0;

}
