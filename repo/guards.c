#include <stdio.h>
#include <stdbool.h>

/* Guard examples */
int divide(int a, int b)
{
    if (b == 0)              // Guard
        return 0;

    return a / b;
}

int findFirstPositive(int values[], int size)
{
    if (values == NULL)      // Guard
        return -1;

    if (size <= 0)           // Guard
        return -1;

    for (int i = 0; i < size; i++)
    {
        if (values[i] > 0)
            return i;
    }

    return -1;
}

/* Contains guard and non-guard if-statements */
int processValue(int value)
{
    if (value < 0)           // Guard
        return -1;

    int result = value;

    if (value > 100)         // Not a guard
    {
        result *= 2;
    }

    if (value % 2 == 0)      // Not a guard
    {
        result += 10;
    }
    else
    {
        result += 5;
    }

    return result;
}

void printNumbers(int max)
{
    if (max <= 0)            // Guard
        return;

    for (int i = 0; i < max; i++)
    {
        if (i == 5)           // Guard-like loop control
            continue;

        printf("i = %d\n", i);
    }
}

void analyzeMatrix(int rows, int cols)
{
    for (int r = 0; r < rows; r++)
    {
        for (int c = 0; c < cols; c++)
        {
            if (r == c)      // Not a guard
            {
                printf("Diagonal: (%d,%d)\n", r, c);
            }

            if ((r + c) > 6) // Guard for current loop iteration
            {
                continue;
            }

            printf("Cell: (%d,%d)\n", r, c);
        }
    }
}

bool isPrime(int number)
{
    if (number < 2)          // Guard
        return false;

    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            return false;    // Guard
        }
    }

    return true;
}

void searchNumber(int target)
{
    int numbers[] = {3, 8, 12, 17, 25, 40};

    for (int i = 0; i < 6; i++)
    {
        if (numbers[i] == target)
        {
            printf("Found %d\n", target);
            break;           // Guard-like early exit from loop
        }

        if (numbers[i] > target)
        {
            printf("Stopped search early\n");
            break;           // Guard-like early exit from loop
        }
    }
}

int main(void)
{
    int values[] = {-1, -5, 0, 4, 10};

    printf("divide: %d\n", divide(10, 2));
    printf("first positive index: %d\n",
           findFirstPositive(values, 5));

    printf("processValue(50): %d\n",
           processValue(50));

    printf("processValue(120): %d\n",
           processValue(120));

    printNumbers(10);

    analyzeMatrix(3, 4);

    printf("17 prime? %s\n",
           isPrime(17) ? "yes" : "no");

    searchNumber(17);

    return 0;
}