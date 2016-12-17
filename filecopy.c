#include <stdio.h>
//#include <conio.h>


int main(void) {
  FILE *in, *out;
  char name[25];

  //clrscr();

  printf("Enter the input file name: ");
  scanf("%s", name);

  in = fopen(name, "rt");
  if(in == NULL) {
    printf("Failed to open the input file.");
    //getch();
    return 1;
  }

  printf("Enter the output file name: ");
  scanf("%s", name);

  out = fopen(name, "wt");
  if(out == NULL) {
    printf("Failed to open the output file.");
    //getch();
    return 1;
  }

  while(!feof(in)) {
    fputc(fgetc(in), out);
  }

  fclose(in);
  fclose(out);

  printf("File copied.\n");

  //getch();
  return 0;
}
