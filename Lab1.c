#include <stdio.h>
#include <stdlib.h>

int main(void)
{

int x,y ;

    printf("Please enter first number");
    scanf("%d",&x);
    printf("Please enter second number");
    scanf("%d",&y);
    printf("sum = %d\nsub= %d\nmul= %d\ndiv= %d ",x+y,x-y,x*y,x/y);
}