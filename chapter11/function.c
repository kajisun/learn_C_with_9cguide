#include <stdio.h>

// prototype declaration
void olympic(int);

int main(void)
{

    int year;
    printf("Enter: ");
    scanf("%i", &year);

    olympic(year);

    return 0;
}

void olympic(int year)
{
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
}
