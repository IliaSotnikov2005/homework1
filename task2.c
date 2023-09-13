#include <stdio.h>
#include <stdbool.h>

int getNum(void)
{
    int num = 0;
    char ch = 0;

    while (true)
    {
        int input = scanf_s("%d%c", &num, &ch);
        if (input == 2 && ch == '\n' && num >= 0)
        {
            break;
        }
        else
        {
            printf("\nInvalid input format\nTry again: ");
        }
        while ((ch = getchar()) != '\n' && ch != EOF);
    }
    return num;
}

int main()
{
    int number1 = 0;
    printf("Enter the first number: ");
    number1 = getNum();

    int number2 = 0;
    printf("\nEnter the second number: ");
    number2 = getNum();

    printf("\nInitial numbers: %d, %d\n", number1, number2);
    number1 += number2;
    number2 = number1 - number2;
    number1 = number1 - number2;
    printf("The resulting numbers: %d, %d\n", number1, number2);
}
