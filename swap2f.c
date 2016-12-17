#include <stdio.h>
//#include <conio.h>


void swap(int *, int *);

int main(void) {
  int a, b;
  //clrscr();
  printf("Enter the two numbers to be swapped :");
  scanf("%d%d", &a, &b);
  swap(&a, &b);
  printf("The swapped numbers are %d and %d.\n", a, b);
  //getch();
  return 0;
}


void swap(int *a, int *b) {
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}
