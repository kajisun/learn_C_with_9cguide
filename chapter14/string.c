#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void)
{
    char str[] = "145";
    int value = atoi(str);
    printf("%i\n", value);

    char str1[0];
    strcpy(str1, "MARIO\n");
    printf("%s", str1);

    char str2[] = "MARIO", str3[] = "!!!!!!!!!!!!!!!!!!!!!!!!!!";
    strncpy(str3, str2, 3);
    printf("%s\n", str3);
    str3[3] = '\0'; // add EOS !!! use '', instead of ""
    printf("%s\n", str3);

    char str4[8] = "DRAGON", str5[] = "QUEST";
    strcat(str4, str5);
    printf("%s\n", str4);

    char str6[16];
    char str7[] = "DRAGON", str8[] = "QUEST";
    int i = 8;

    sprintf(str6, "%s + %s  /*- afefiEF %i", str7, str8, i);
    printf("%s\n", str6);

    /*
    char str9[32];
    printf("Enter: ");
    scanf("%32s", str9);
    printf("yor input is : %s\n", str9);
    for (i = 0; str9[i] != '\0'; i++);
    printf("length: %i\n", i);

    i = 0;
    if (i == '\0')
    {
        printf("true");
    }
    */

    char full[32], last[16];
    printf("Enter your first name: ");
    scanf("%15s", full);
    printf("Enter your last name: ");
    scanf("%15s", last);
    sprintf(full, "%s %s", full, last);
    printf("Welcome! %s\n", full);

    return 0;
}