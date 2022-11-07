/*Summarize Survey Results*/

#include <stdio.h>
#include <stddef.h>
#define RESPONSES_SIZE 40 // DEFINE ARRAY SIZE
#define FREQUENCY_SIZE 11

// function main begin program execution
int main(void)
{
    // initialize frequency counters to 0
    int frequency[FREQUENCY_SIZE] = {0};

    // place the survey responses in the response array
    int responses[RESPONSES_SIZE] = {1, 2, 6, 4, 8, 5, 9, 7, 8, 10, 1, 6, 3, 8, 6, 10, 3, 8, 2, 7, 6, 5, 7, 6, 8, 6, 7, 5, 6, 6, 5, 6, 7, 5, 6, 4, 8, 6, 8, 10};

    /*for each answer, select value of an element of array responses and use that value as a index in array frequency to determine element to increment*/
    for (size_t answer = 0; answer < RESPONSES_SIZE; answer++)
    {
        ++frequency[responses[answer]];
    }

    // dispaly results
    printf("%s%17s\n", "Rating", "Frequency");

    // output the frequencies in a tabular format
    for (size_t rating = 0; rating < FREQUENCY_SIZE; rating++)
    {
        printf("%6zu%17d\n", rating, frequency[rating]);
    }
}