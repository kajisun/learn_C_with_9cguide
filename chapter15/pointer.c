#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void func(int *pvalue);
int getav(int data[]);
void max_min(int *max, int *min, int array[]);

int num_elm;

int main(void)
{
    int i, j, k, array[10];
    char c, d, e;
    int size = sizeof(array) / sizeof(array[0]);

    printf("%p\t%p\t%p\t%p\n", &i, &j, &k, array);
    printf("%p\t%p\t%p\n", &c, &d, &e);

    for (i = 0; i < size; i++)
    {
        printf("array[%i] : %p\n", i, &array[i]);
    }

    int *p = NULL;

    if (!p)
    {
    printf("%p\n", p);
    }

    p = &i;
    printf("%p\n", p);

    *p = 15;
    printf(" p = %i\n", *p);
    printf(" i = %i\n", i);

    int value = 10;
    printf("&value = %p\n", &value);
    func(&value);
    printf("value = %i\n", value);

    int average, array1[10] = {15,78,98,15,98,85,17,35,42,15};
    printf("array1[3] = %i\n", array1[3]);
    average = getav(array1);
    printf("%i\n", average);
    printf("array1[3] = %i\n", array1[3]);

    int array2[5] = {15,98,98,17,42};
    average = getav(array2);
    printf("%i\n", average);

    int buffer, num = 10, inputs[10];
    num_elm = 0;

    while (num_elm < num)
    {
        printf("%i. Enter a number (0 ~ 100):", num_elm + 1);
        scanf("%i", &buffer);

        if (buffer >= 0 && buffer <= 100)
        {
            inputs[num_elm] = buffer;
            num_elm++;
        }
        else if (buffer == -1)
        {
            break;
        }
    }
    int max = inputs[0], min = inputs[0];
    max_min(&max, &min, inputs);

    printf("max: %i, min: %i\n", max, min);

    return 0;
}

void func(int *pvalue)
{
    printf("pvalue = %p\n", pvalue);
    *pvalue = 100;

    return;
}

int getav(int data[])
{
    int i, average = 0;
    for (i = 0; i < 10; i++)
    {
        average += data[i];
    }
    data[3] = 111;
    return average / 10;
}

void max_min(int *max, int *min, int array[])
{
    for (int m = 0; m < num_elm; m++)
    {
        if (array[m] > *max)
        {
            *max = array[m];
        }
        if (array[m] < *min)
        {
            *min = array[m];
        }
    }
    return;
}
