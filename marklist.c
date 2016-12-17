#include <stdio.h>
#include <stdlib.h>
//#include <conio.h>


struct employee {
  int id;
  char name[25];
  char job[25];
  int age;
};


int main(void) {
  struct employee *list, *t;
  int i, n, id = 0;

  //clrscr();

  printf("Enter the number of employees :");
  scanf("%d", &n);
  printf("\n");

  list = (struct employee*) malloc(sizeof(struct employee) * n);
  if(list == NULL) {
    printf("There was an error initialising\n");
    //getch();
    return 1;
  }

  t = list;

  for(i=0;i<n;i++) {
    printf("Enter the name: ");
    scanf("%s", list->name);

    printf("Enter the ID: ");
    scanf("%d", &(list->id));

    printf("Enter the designation: ");
    scanf("%s", list->job);

    printf("Enter the age: ");
    scanf("%d", &(list->age));

    printf("\n");

    list++;
  }
  list = t;

  while (id != -1) {

    printf("Enter the ID to be searched (-1 to exit) :");
    scanf("%d", &id);
    printf("\n");

    if(id == -1)
      continue;

    i = 0;
    while(i < n && list->id != id){
      list++;
      i++;
    }

    if(i < n) {
      printf("ID: %d\n", list->id);
      printf("Name: %s\n", list->name);
      printf("Designation: %s\n", list->job);
      printf("Age: %d\n", list->age);
    } else {
      printf("Wrong ID\n");
    }
  }

  free(t);

  //getch();
  return 0;
}
