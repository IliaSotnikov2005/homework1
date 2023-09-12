#include <stdio.h>
#include <stdlib.h>
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
    int arraySize = 0;
    printf("Enter the length of the array: ");
    arraySize = getNum();
    int* arrayOfNumbers = malloc(arraySize * sizeof(int));

    printf("\nEnter the array elements one by one:\n");
    for (int i = 0; i < arraySize; i++)
    {
        int value = 0;
        printf("array[%d] = ", i);
        value = getNum();
        arrayOfNumbers[i] = value;
    }

    int zeroCounter = 0;
    for (int i = 0; i < arraySize; i++)\
    {
        if (arrayOfNumbers[i] == 0)
        {
            zeroCounter++;
        }
    }
    printf("The number of zeros in the array: %d", zeroCounter);
}

