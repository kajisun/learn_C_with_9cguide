#include <stdio.h>

// prototype declaration
int olympic(int);

enum
{
    NO,
    SUMMER,
    WINTER,
};

int main(void)
{
    int year, hold;
    printf("Enter: ");
    scanf("%i", &year);

    hold = olympic(year);

    switch (hold)
    {
        case NO:
            printf("No Olympic Games\n");
            break;
        case SUMMER:
            printf("Summer Olympic Games\n");
            break;
        case WINTER:
            printf("Winter Olympic Games\n");
            break;

    };

    return 0;
}

int olympic(int year)
{
    if (year % 4 == 0)
    {
        return SUMMER;
    }
    if (year % 4 == 2)
    {
        return WINTER;
    }
    else return NO;
}
