#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int age;
    char name[64];
    char sex[10];
} info;

void input(info data[], int n);
void output(info data[], int n);

int main(void)
{
    int n = 3;
    info data[n];

    input(data, n);
    output(data, n);

    return 0;
}

void input(info data[], int n)
{
    for (int i = 0; i < n; i++)
    {
        char buffer[64];
        printf("Enter name: ");
        scanf("%s", buffer);
        strcpy(data[i].name, buffer);
        printf("Enter age: ");
        scanf("%i", &data[i].age);
        printf("man or woman?: ");
        scanf("%s", buffer);
        strcpy(data[i].sex, buffer);
    }
    return;
}
void output(info data[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("data %i...\nname\t: %s\n", i, data[i].name);
        printf("age\t: %i\n", data[i].age);
        printf("sex\t: %s\n", data[i].sex);
    }

    return;
}