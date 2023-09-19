#include <stdio.h>
#include "draw.h"

/* Prints a size x size square whose left col is at startCol */
void print_square(int leftCol, int size)
{
  int i, j;
  int endCol = leftCol + size;
  for (int row = 0; row < size; row++){
    int col;
    for (col = 0; col < leftCol; col++) putchar(' ');
    for (       ; col < endCol;  col++) putchar('*');
    putchar('\n');
  }
}

// Prints a triangle of specified height whose left edge is at col leftCol.
void print_triangle(int leftCol, int size)
{
  for (int row = 0; row <= size; row++) {
    int minCol = leftCol + size - row, maxCol = leftCol + size + row;
    int col;
    int counter=0;
    for (col = 0; col < minCol; col++) putchar(' ');//printf("%d",++counter);
    for (       ; col <= maxCol; col++) putchar('*');
    putchar('\n');
  }
}

void print_Arrow_8x12(char c){
  print_arrow_triangle();
  print_arrow_square( c);
}

