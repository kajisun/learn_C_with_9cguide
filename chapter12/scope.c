#include <stdio.h>

// prototype declaration
int countfunc(void);

int global; //global variable

int main(void)
{
    // int global;  invalid duplication
    countfunc();
    countfunc();
    global = 10;
    countfunc();
    countfunc();

    printf("\n");

    /* this didn't work
    int value1 = 10, value2 = 20;
    printf("1. value1:\t%i\n", value1);
    printf("1. value2:\t%i\n", value2);

    {
        int value1 = 30;
        value2 = 40;
        printf("2. value1:\t%i\n", value1);
        printf("2. value2:\t%i\n", value2);
    }

    printf("3. value1:\t%i\n", value1);
    printf("3. value2:\t%i\n", value2);
    */

    return 0;
}

int countfunc(void)
{
    static int count = 5;
    count++;
    global++;
    printf("local\t: %03d\n", count);
    printf("grobal\t: %03d\n", global);
    return count;
}
