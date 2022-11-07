/*Graphing array element value with histograph*/

#include <stdio.h>
#include <stddef.h>
#define SIZE 5

// function main begins program execution
int main(void)
{
    int n[SIZE] = {19, 3, 15, 7, 11};

    printf("%s%13s%17s\n", "Element", "Value", "Histogram");

    // for each element of array n, output a bar of the histogram

    for (size_t i = 0; i < SIZE; ++i)
    {
        printf("%7zu%13d        ", i, n[i]); // spaces in print is used to align the histogram stars

        for (int j = 1; j <= n[i]; ++j)
        {
            printf("%c", '*');
        }
        puts(""); // end a histogram bar with a new line
    }
}
