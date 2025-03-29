#include <stdio.h>
#include <stdlib.h>
#include "shu_magic.h"

int isLoShuMagic(int square[SIZE][SIZE])
{

    int row = 0;
    int col = 0;
    int diagonal_one = 0;
    int diagonal_two = 0;

    int numInSquare[10];

    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            int nums = square[i][j];
            if ((nums < 1 || nums > 9) || numInSquare[nums])
            {
                return 0; // indicates square cannot be made
            }
        }
    }

    for (int i = 0; i < SIZE; i++)
    {
        row = 0;
        col = 0;

        for (int j = 0; j < SIZE; j++)
        {
            row += square[i][j];
            col += square[i][j];
        }
        if (col != MAGIC_SQUARE_SUM || row != MAGIC_SQUARE_SUM)
        {
            return 0;
        }
        diagonal_one += square[i][i];
        diagonal_two += square[i][SIZE - 1 - i];
    }
    if (diagonal_one != MAGIC_SQUARE_SUM || diagonal_two != MAGIC_SQUARE_SUM)
    {
        return 0;
    }
    return 1;
}

void printMagicSq(int square[SIZE][SIZE])
{
    for (int i = 0; i < SIZE; i++)
    {
        printf("[");
        for (int j = 0; j < SIZE; j++)
        {
            printf("%d ", square[i][j]);
        }
        printf("]\n");
    }
}

void populateRandomNums(int square[SIZE][SIZE])
{
    int numsArray[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (int i = 8; i > 0; i--)
    {
        int j = rand() % (i + 1);
        int temp = numsArray[i];
        numsArray[i] = numsArray[j];
        numsArray[j] = temp;
    }

    int index = 0;
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            square[i][j] = numsArray[index++];
}
