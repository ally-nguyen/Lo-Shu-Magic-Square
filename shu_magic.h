#ifndef LO_SHU_MAGIC_SQUARE_H
#define LO_SHU_MAGIC_SQUARE_H

#define SIZE 3 // max number per row or column or diagonal
#define MAGIC_SQUARE_SUM 15

int isLoShuMagic(int squaree[SIZE][SIZE]);
void printMagicSq(int square[SIZE][SIZE]);

void populateRandomNums(int square[SIZE][SIZE]);

#endif