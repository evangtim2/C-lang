/*Rolling a die 60,000,000 times and summarizing the results in an array*/

// Roll a six-sided die 60,000,000 times
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 7

int main(void)
{
    unsigned int frequency[SIZE] = {0}; // clear counts

    srand(time(NULL)); // seed random number generator

    // ROLL DIE 60,000,000 TIMES
    for (unsigned int roll = 1; roll < 60000000; roll++)
    {
        size_t face = 1 + rand() % 6;
        ++frequency[face]; // replaces entire switch of counter
    }

    printf("%s%17s\n", "Face", "Frequency");

    // output frequency element 1 - 6 in tabular format
    for (size_t face = 1; face < SIZE; face++)
    {
        printf("%4zu%17d\n", face, frequency[face]);
    }
}