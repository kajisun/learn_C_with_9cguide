#include <stdio.h>

int main(void)
{
    printf("%d + %d = %d Yen\n", 100, 200, 100 + 200);
    printf("%d\n", (1 + 100) * 100 / 2);
    // printf("%f\n", 10 / 3); : causes of error
    printf("%f\n", 10 / 3.0);

    printf("practice 3-1:\n");
    printf("%d / %d = %d the remainder: %d\n", 40, 13,
            40 / 13, 40 % 13);
    return 0;
}