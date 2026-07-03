#include <stdio.h>

int classifyNumber(int n)
{
    if (n > 0)                    // Decision 1
    {
			return 2
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