#include <stdio.h>

int main(void)
{
    int number; // variables are basically daclared at top of function
    printf("Hello\n");
    int value; // this is valid because of C++ compiler, but invalid in C compiler
    value = 10;
    printf("%d\n", value);

    int left = 10;
    int right = 3;
    int sum = left + right;

    printf("\n\n");
    printf("%i\n", sum);
    sum += 30;
    printf("%i\n", sum);
    printf("%i\n", ++sum);
    printf("%i\n", --sum);
    printf("%i\n", sum++);
    printf("%i\n", sum--);
    printf("%i\n", sum);

    printf("\n\n");
    double leftd = 10, rightd = 3, sumd = leftd + rightd;
    // printf("%i\n", sumd); error
    // printf("%d\n", sumd); error
    printf("%f\n", sumd);


    // cast
    printf("\n\n");
    printf("%f\n", 1.03 * 9);
    printf("%f\n", 1.05 * 360); // 378.00...
    printf("%i\n", (int) 1.05 * 360); // 1 * 360
    printf("%i\n", (int) (1.05 * 360));

    // format
    printf("\n\n");
    int a = 10000, b = 500, c = 3;

    printf("a is %5d\n", a);
    printf("b is %5d\n", b);
    printf("c is %5d\n", c);
    printf("\na is %05d\n", a);
    printf("b is %05d\n", b);
    printf("c is %05d\n", c);

    printf("\n");
    double pi = 3.14159;
    printf("%6.2f\n", pi);
    printf("123456\n");

    printf("\npractice 3-1\n");
    int juice = 198, milk = 138 * 2, money = 1000, change;
    double tax = 1.05;

    change = money - (int) ((juice + milk) * tax);
    printf("%05i yen\n", change);

    return 0;
}