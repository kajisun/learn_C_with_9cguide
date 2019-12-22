#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int grade;
    int clas;
    int id;
    char name[64];
    double height;
    double weight;
} student;

void student_print(student data);

int main(void)
{
    student data1, data2;
    student *pdata1, *pdata2;

    pdata1 = &data1;
    pdata2 = &data2;

    data1.grade = 3;
    data1.clas = 4;
    data1.id = 26;
    strcpy(data1.name, "MARIO");
    data1.height = 168.2;
    data1.weight = 72.4;

    data2 = data1;

    pdata2->id =10;
    strcpy(pdata2->name, "LUIGE");

    student_print(data1);
    student_print(*pdata2);

    return 0;
}

void student_print(student data)
{
    printf("\nname\t: %s\n\n", data.name);
    printf("grade\t: %i\n", data.grade);
    printf("class\t: %i\n", data.clas);
    printf("id\t: %i\n", data.id);
    printf("height\t: %lf\n", data.height);
    printf("weight\t: %lf\n", data.weight);
}