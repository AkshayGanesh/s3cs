//Factorial of an number using recursion

#include <stdio.h>
#include <conio.h>
int fact(int);
void main()
{
  int n;
  clrscr();
  printf("Enter the number\n");
  scanf("%d",&n);
  printf("The factorial of %d is %d",n,fact(n));
  getch();
}
fact(int p)
{
  if(p>=1)
    return(p*fact(p-1));
  else
    return 1;
}
