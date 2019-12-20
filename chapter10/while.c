#include <stdio.h>

int main(void)
{
    int score;
    do
    {
        printf("Enter your test score: ");
        scanf("%i", &score);

        if (score > 100)
        {
            printf("your score is greater than 100.\n");
            printf("Please enter again.\n");
        }
        else if (score < 0)
        {
            printf("your score is negative.\n");
            printf("Please enter again.\n");
        }
    } while (score > 100 || score < 0);
    return 0;
}