#include<stdio.h>

int main() {

  int lineToMake = 10;
  int lineIndex = 1;
  int rows = 10;
  int rowIndex = 1;
  int columns = 10;
  int columnIndex = 1;

  for (lineIndex = 1; lineIndex <= lineToMake; lineIndex++) {
    for (columnIndex = 1; columnIndex <= columns; columnIndex++) {
      printf("\n");
      printf("|");
    }
    for(rowIndex = 1; rowIndex <= rows; rowIndex++) {
      printf("-");
    }
  }
}
