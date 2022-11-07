// Character Arrays

#include <stdio.h>
#define SIZE 20

int main(void)
{
    char string1[SIZE];                // reserve 20 characters
    char string2[] = "string literal"; // reserve 15 characters

    // read string from user into array string1
    printf("%s", "Enter a string (no longer than 19 characters): ");
    scanf("%19s", string1); // input no more than 19 characters

    // output strings
    printf("string1 is: %s\nstring2 is: %s\n", string1, string2);

    // output characters until null charater is reached
    for (size_t i = 0; i < SIZE && string1[i] != '\0'; i++)
    {
        printf("%c ", string1[i]);
    }

    puts("");
}
