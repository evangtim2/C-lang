#include <stdio.h>
#define SIZE 5 // maximum size of array

int main(void)
{
    int s[SIZE]; // array s has SIZE element

    for (size_t j = 0; j < SIZE; j++)
    {
        s[j] = 2 + 2 * j;
    }

    printf("%s%13s\n", "Element", "Value");

    // output contents of array s in tabular format
    for (size_t j = 0; j < SIZE; j++)
    {
        printf("%7zu%13d\n", j, s[j]);
    }
}

