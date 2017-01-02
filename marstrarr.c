// Program to accept the marklist of a student using structure array

#include <stdio.h>
//#include <conio.h>

struct mlist {
  char name[20];
  int rollno;
  float m1, m2, m3;
  float total;
  float avg;
} entry[10];


int main(void) {
  //clrscr();

  int num, i, sno;
  printf("Enter the number of students: ");
  scanf("%d", &num);

  for(i = 0;i < num;i++) {
    printf("Enter the name :");
    scanf("%s", entry[i].name);

    printf("Enter the roll no. :");
    scanf("%d", &(entry[i].rollno));

    printf("Enter the marks of the students :");
    scanf("%f%f%f", &(entry[i].m1), &(entry[i].m2), &(entry[i].m3));

    entry[i].total = entry[i].m1 + entry[i].m2 + entry[i].m3;
    entry[i].avg = entry[i].total / 3.0;
  }

  printf("Enter the roll no. to be searched :");
  scanf("%d", &sno);

  for(i = 0;i < num && entry[i].rollno != sno;i++);

  if(num != i) {
    printf("\n\nName: %s\nRoll No.: %d\nMark 1: %f\nMark 2: %f\nMark 3: %f\nTotal: %f\nAverage: %f\n", entry[i].name, entry[i].rollno, entry[i].m1, entry[i].m2, entry[i].m3, entry[i].total, entry[i].avg);
  } else {
    printf("The roll number doesn\'t exist.");
  }

  //getch();
  return 0;
}
