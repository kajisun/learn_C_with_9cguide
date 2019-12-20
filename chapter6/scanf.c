#include <stdio.h>

int main(void)
{
    /*
    double data1, data2;
    scanf("%lf%lf", &data1, &data2);
    printf("%.50lf\n%.50lf\n", data1, data2);
    */

    /*
    // simple sigma program
    // user input
    int min, max, sum;
    printf("Enter min & max integer (divide these value by \",\"): ");
    scanf("%i, %i", &min, &max);

    // calculation
    sum = (min + max) * (max - min + 1) / 2;

    // output
    printf("the summation between %i to %i is %i\n", min, max, sum);
    */
    // practice
    double regular;
    printf("Enter the regular price: ");
    scanf("%lf", &regular);

    printf("10%%OFF: %i yen\n", (int) (regular * (1 - 0.1)));
    printf("30%%OFF: %i yen\n", (int) (regular * (1 - 0.3)));
    printf("50%%OFF: %i yen\n", (int) (regular * (1 - 0.5)));
    printf("80%%OFF: %i yen\n", (int) (regular * (1 - 0.8)));

    return 0;
}