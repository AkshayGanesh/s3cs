//Calculator Simulation using Function

#include <stdio.h>
#include <conio.h>
int sum(int,int);
int diff(int,int);
int prod(int,int);
int div(int,int);
void main()
{
  int a,b,ch;char choice='y';
  clrscr();

  do
  {
    printf("Enter the two numbers\n");
    scanf("%d%d",&a,&b);
    printf("MENU\n****\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division");
    printf("\nEnter your choice\n");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1:
      printf("The sum is %d",sum(a,b));
      break;
      case 2:
      printf("The difference is %d",diff(a,b));
      break;
      case 3:
      printf("The product is %d",prod(a,b));
      break;
      case 4:
      printf("The quotient is %d",div(a,b));
      break;
      default:printf("Wrong choice entered");
    }
    printf("\nDo you want to continue(Y/N)?\n");
   choice=getch();
  }while(choice=='y'||choice=='Y');
  getch();
}

sum(int p,int q)
{
  return(p+q);
}
diff(int p,int q)
{
  return(p-q);
}
prod(int p,int q)
{
  return(p*q);
}
div(int p,int q)
{
  return(p/q);
}
