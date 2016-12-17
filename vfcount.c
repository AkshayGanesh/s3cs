#include <stdio.h>
//#include <conio.h>


int main(void) {
  FILE *in;
  char name[25];
  int v = 0;
  char c;

  //clrscr();

  printf("Enter the input file name: ");
  scanf("%s", name);

  in = fopen(name, "rt");
  if(in == NULL) {
    printf("Failed to open the input file.");
    //getch();
    return 1;
  }

  while(!feof(in)){
    c = (char)fgetc(in);

    switch (c) {
      case 'a':
      case 'A':

      case 'e':
      case 'E':

      case 'i':
      case 'I':

      case 'o':
      case 'O':

      case 'u':
      case 'U':
        v++;
    }
  }

  printf("The number of vowels was: %d\n", v);
  //getch();

  fclose(in);

  return 0;
}
