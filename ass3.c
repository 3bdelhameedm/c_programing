#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a, b;
    printf("please enter number a:");
    scanf("%d", &a);
    printf("please enter number b:");
    scanf("%d", &b);
    printf("a + b = %d\na - b = %d\na & b = %d\na | b = %d\na ^ b = %d\n", a + b, a - b, a & b, a | b, a ^ b);
}