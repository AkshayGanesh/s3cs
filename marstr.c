// Program to accept the marklist of a student using structure

#include <stdio.h>
//#include <conio.h>

struct mlist {
  char name[20];
  int rollno;
  float m1, m2, m3;
  float total;
  float avg;
} entry;


int main(void) {
  //clrscr();

  printf("Enter the name: ");
  scanf("%s", entry.name);

  printf("Enter the roll no. : ");
  scanf("%d", &(entry.rollno));

  printf("Enter the marks of the students: ");
  scanf("%f%f%f", &(entry.m1), &(entry.m2), &(entry.m3));

  entry.total = entry.m1 + entry.m2 + entry.m3;
  entry.avg = entry.total / 3.0;

  printf("\n\nName: %s\nRoll No.: %d\nMark 1: %f\nMark 2: %f\nMark 3: %f\nTotal: %f\nAverage: %f\n", entry.name, entry.rollno, entry.m1, entry.m2, entry.m3, entry.total, entry.avg);

  //getch();
  return 0;
}
