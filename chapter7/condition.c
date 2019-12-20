#include <stdio.h>

int main(void)
{
    /*
    int value;
    printf("Enter: ");
    scanf("%i", &value);

    if (value > 100)
    {
        value = 100;
        printf("fix value to 100\n");
    }
    printf("%i point\n", value);
    */

    int year;
    printf("Enter: ");
    scanf("%i", &year);

    if (year % 4 == 0)
    {
        printf("Summer Olympic Games\n");
    }
    if (year % 4 == 2)
    {
        printf("Winter Olympic Games\n");
    }
        if (year % 2 != 0)
    {
        printf("No Olympic Games\n");
    }

    return 0;
}