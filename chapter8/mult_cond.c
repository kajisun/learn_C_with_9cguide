#include <stdio.h>

int main(void)
{
    int no;
    scanf("%d", &no);
    /*
    switch (no)
    {
        case 1:
            printf("1\n");
            break;
        case 2:
            printf("2\n");
            break;
        default:
            printf("Nothing this case\n");
            break;
    }
    */

    // practice
    switch (no)
    {
        case 1:
            printf("January\n");
            break;
        case 2:
            printf("February\n");
            break;
        case 3:
            printf("March\n");
            break;
        case 4:
            printf("April\n");
            break;
        case 5:
            printf("May\n");
            break;
        case 6:
            printf("Jun\n");
            break;
        case 7:
            printf("July\n");
            break;
        case 8:
            printf("August\n");
            break;
        case 9:
            printf("September\n");
            break;
        case 10:
            printf("October\n");
            break;
        case 11:
            printf("Novemver\n");
            break;
        case 12:
            printf("Decemver\n");
            break;
        default:
            printf("invalid number\n");
            break;
    }
    return 0;
}