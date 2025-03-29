#include <stdio.h>
#include "shu_magic.h"

int main()
{
    int testSucessOfSquare[SIZE][SIZE] = {
        {4, 9, 2},
        {3, 5, 7},
        {8, 1, 6}};

    int failSquare[SIZE][SIZE] = {
        {5, 2, 4},
        {6, 3, 1},
        {8, 7, 9}};

    if (isLoShuMagic(testSucessOfSquare))
    {
        printf("The square is a Lo Shu Magic Square!\n");
    }
    else
    {
        printf("The square is NOT a Lo Shu Magic Square.\n");
    }
    printMagicSq(testSucessOfSquare);

    // Check and print the invalid square
    /* printf("\nTesting invalid Lo Shu Magic Square:\n");
     if (isLoShuMagic(failSquare))
     {
         printf("The square is a valid Lo Shu Magic Square!\n");
     }
     else
     {
         printf("The square is NOT a valid Lo Shu Magic Square.\n");
     }
     printMagicSq(failSquare);*/

    return 0;
}