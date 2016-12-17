//Matrix Operation Using Function

#include <stdio.h>
#include <conio.h>
void sum(int[][10],int[][10]);
void diff(int[][10],int[][10]);
void prod(int[][10],int[][10]);
int m,n,p,k,q,a[10][10],b[10][10],i,j,c[10][10];
void main()
{
 int ch,k;char choice='y';
 clrscr();
 printf("Enter the order of the first matrix\n");
 scanf("%d%d",&m,&n);
 printf("Enter the array\n");
 for(i=0;i<m;i++)
 for(j=0;j<n;j++)
 scanf("%d",&a[i][j]);

 printf("Enter the order of the second matrix\n");
 scanf("%d%d",&p,&q);
 printf("Enter the array\n");
 for(i=0;i<p;i++)
 for(j=0;j<q;j++)
 scanf("%d",&b[i][j]);

 do
 {
  printf("Menu\n*****\n1.Addition\n2.Subtraction\n3.Multiplication\n");
  printf("Enter your choice:\t");
  scanf("%d",&ch);
  switch(ch)
  {
   case 1:
   sum(a,b);break;
   case 2:
   diff(a,b);break;
   case 3:
   prod(a,b);break;
   default:printf("Wrong choice entered");
  }
  printf("Do you want to continue(Y/N)? ");
  choice=getch();
  }while(choice=='y'||choice=='Y');
 getch();
}
void sum(int a[10][10],int b[10][10])
{

 if(p==m&&q==n)
 {
  for(i=0;i<m;++i)
  for(j=0;j<n;++j)
  c[i][j]=a[i][j]+b[i][j];
  printf("The added matrix is \n");
  for(i=0;i<p;i++)
  {
   printf("\n");
   for(j=0;j<q;j++)
   printf("%d\t",c[i][j]);
  }
 }
 else
 printf("\nThe matrices cannot be added\n");
}
void diff(int a[10][10],int b[10][10])
{
 if(p==m&&q==n)
 {
  for(i=0;i<m;i++)
  for(j=0;j<n;j++)
  c[i][j]=a[i][j]-b[i][j];
  printf("The subtracted matrix is \n");
  for(i=0;i<p;i++)
  {
   printf("\n");
   for(j=0;j<q;j++)
   printf("%d\t",c[i][j]);
  }
 }
 else
 printf("\nThe matrices cannot be subtracted\n");
}
void prod(int a[10][10],int b[10][10])
{
 if(n==p)
 {
  for(i=0;i<m;i++)
  for(j=0;j<n;j++)
  {
   c[i][j]=0;
   for(k=0;k<m;k++)
   c[i][j]=c[i][j]+a[i][k]*b[k][j];
  }
  printf("The product Matrix is \n");
  for(i=0;i<m;i++)
  {
   printf("\n");
   for(j=0;j<q;j++)
   printf("%d\t",c[i][j]);
  }
 }
 else
 printf("Cannot multiply");
}
