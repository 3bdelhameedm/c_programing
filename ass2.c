#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num1, num2, num3;                                                      // Define int variables
    printf("please enter number 1");                                           // display please enter number 1 to user
    scanf("%d", &num1);                                                        // Get number 1 from user
    printf("please enter number 2");                                           // display please enter number 2 to user
    scanf("%d", &num2);                                                        // Get number 2 from use
    printf("please enter number 3");                                           // display please enter number 3 to user
    scanf("%d", &num3);                                                        // Get number 3 from use
    printf("number 3 : %d\nnumber 2 : %d\nnumber 1 : %d\n", num1, num2, num3); // print them in reversed order
}