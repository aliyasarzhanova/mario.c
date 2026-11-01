#include <stdio.h>

int main()
{
    int number;

    do
    {
        printf("enter the height of the pyramid: ");
        scanf("%i", &number);

        if (number <= 1)
        {
            printf("enter the height of the pyramid: ");
        }
    } while (number > 8);

    for (int i = 0; i < number; i++)
    {
        for (int space = 0; space < number - i - 1; space++)
        {
            printf(" ");
        }

        for (int hash = 0; hash < i + 1; hash++)
        {
            printf("#");
        }

        printf("\n");
    }


}