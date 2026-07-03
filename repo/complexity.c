#include <stdio.h>

int classifyNumber(int n)
{
    if (n > 0)                    // Decision 1
    {
        if (n % 2 == 0)           // Decision 2
            return 1;             // Positive even
        else
            return 2;             // Positive odd
    }
    else if (n < 0)               // Decision 3
    {
        return 3;                 // Negative
    }
    else
    {
        return 4;                 // Zero
    }
}

int main()
{
    int result = classifyNumber(5);
    printf("%d\n", result);
    return 0;
}