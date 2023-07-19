#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    
    int Id = 56842;
    int pass = 3218631;
    int id;
    int pass_;
    printf("please enter your Id ");
    scanf("%d", &id);
    if (id == Id)
    {
        printf("please enter your password ");
        scanf("%d", &pass_);
        printf("your username is :3bdel7ameed ");
    }
    else
    {
        printf("Incorrect ID");
    }
}
