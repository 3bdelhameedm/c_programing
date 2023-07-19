#include <stdio.h>
#include <stdlib.h>

int main(void)
{
int numa[15];
int num;
for (int  i = 1; i <= 10; i++)
{
printf("Enter the number %d",i);
scanf("%d",&numa[i]);


}

printf("enter the value to searche");
scanf("%d",&num);
if (num==numa[1])
{
    printf("value is exist  at element number 1");
}
else if (num==numa[2])
{
        printf("value is exist  at element number 2");

}
else if (num==numa[3])
{
        printf("value is exist  at element number 3");

}
else if (num==numa[4])
{
        printf("value is exist  at element number 4");

}else if (num==numa[5])
{
        printf("value is exist  at element number 5");

}else if (num==numa[6])
{
        printf("value is exist  at element number 6");

}
else if (num==numa[7])
{
        printf("value is exist  at element number 7");

}else if (num==numa[8])
{
        printf("value is exist  at element number 8");

}else if (num==numa[9])
{
        printf("value is exist  at element number 9");

}else if (num==numa[10])
{
        printf("value is exist at element number 10");

}








}