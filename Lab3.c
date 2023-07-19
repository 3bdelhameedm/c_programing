
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int salary;
    printf(" please enter your working hours :");
    scanf("%d", &salary);
    if (salary <= 40)
    {
        salary *= 50;
        salary -= salary / 10;
        printf("your salary is %d ", salary);
    }
    else
    {
        printf("your salary is %d ", (salary * 50));
    }
}