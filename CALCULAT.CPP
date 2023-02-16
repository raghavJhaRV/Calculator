#include <stdio.h>

 int main(void)
{

    long int no1, no2;
    char opt;

    printf("enter a number A:");
    scanf("%d", &no1);
    printf("enter a number B:");
    scanf("%d", &no2);
    printf("\nenter your choice:");
    scanf("\n%c", &opt);
    if (opt == '+')
    {
        printf("sum of both number is %d", no1 + no2);
    }
    else if (opt == '/')
    {
        printf("division of both number is: %f", no1 / no2);
    }
    else if (opt == '-')
    {
        printf("substraction of both number is: %d", no1 - no2);
    }
    else if (opt == '*')
    {
        printf("multipication of both number is: %d", no1 * no2);
    }
    else
    {
        printf("invalid input");
    }

    return 0;
    
}