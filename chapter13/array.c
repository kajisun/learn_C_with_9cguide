#include <stdio.h>
#include <memory.h>

int main(void)
{
    int array[10] = {42, 79, 13};
    int size = sizeof(array) / sizeof(array[0]);

    printf("%i\n", size);

    array[9] = 100;
    printf("1: %i\n", array[9]);
    array[9]++;
    printf("2: %i\n", array[9]);

    for (int i = 0; i < size; i++)
    {
        printf("%i: %i\n", i + 3, array[i]);
    }

    /*
    int array1[] = {42, 79, 13, 19, 41};
    int array2[] = {1, 2, 3, 4, 5};

    size = sizeof(array2) / sizeof(array2[0]);

    for (int i = 0; i < size; i++)
    {
        printf("before %i: %2i\n", i, array2[i]);
        array2[i] = array1[i];
    }

    for (int i = 0; i < size; i++)
    {
        printf("after  %i: %2i\n", i, array2[i]);
    }
    */
    /*
    int array1[] = {42, 79, 13, 19, 41};
    int array2[] = {1, 2, 3, 4, 5};

        for (int i = 0; i < size + 20; i++)
    {
        printf("before %i: %2i\n", i, array2[i]);
    }

    memcpy(array2, array1, sizeof(array1));

    for (int i = 0; i < size + 20; i++)
    {
        printf("after  %i: %2i\n", i, array2[i]);
    }
    */

    int array1[] = {42, 79, 13, 19, 41};
    size = sizeof(array1) / sizeof(array1[0]);

    for (int i = 0; i < size; i++)
    {
        printf("%i: %i\n", i, array1[size - 1 - i]);
    }

    return 0;
}