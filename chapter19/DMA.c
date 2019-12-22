#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int age;
    char name[64];
    int sex;
} info;

void input(info *data);
void output(info *data);

int main(void)
{
    int n = 0, data_size = 1;
    info *data;
    data = malloc(sizeof(info) * data_size);

    while (1)
    {
        if (n >= data_size)
        {
            data_size *= 2;
            data = realloc(data, sizeof(info) * data_size);
        }
        input(&data[n]);
        if (data[n].age == -1) break;
        n++;
    }

    for (int i = 0; i < n; i++)
    {
        output(&data[i]);
    }

    free(data);

    return 0;
}

void input(info *data)
{
    printf("Enter name: ");
    scanf("%s", data->name);
    printf("Enter age (quit if -1 entered): ");
    scanf("%i", &data->age);
    if (data->age == -1)
    {
        printf("quit input\n");
        return;
    }
    do
    {
        printf("Enter sex (man = 0, woman = 1): ");
        scanf("%i", &data->sex);
        printf("\n");
    }
    while (data->sex != 0 && data->sex != 1);

    return;
}
void output(info *data)
{
    if (data->age == -1) return;

    printf("\nname\t: %s\n", data->name);
    printf("age\t: %i\n", data->age);
    if (data->sex == 0)
    {
        printf("sex\t: man\n");
    }
    if (data->sex ==1)
    {
        printf("sex\t: woman\n");
    }
    return;
}