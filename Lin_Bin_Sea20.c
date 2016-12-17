//Linear And Binary Search

#include <stdio.h>
#include <conio.h>
void alinear(int [],int,int);
void abinary(int [],int,int);
void main()
{
  int a[50],n,i,key,ch=0;
  clrscr();
  printf("Enter the number of elements\n");
  scanf("%d",&n);
  printf("Enter the elements\n");
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  while(ch!=3){
  printf("Enter the element to be searched\n");
  scanf("%d",&key);
  printf("Search Method\n*************\n1.Linear Search\n2.Binary Search\n3.Exit\n");
  scanf("%d",&ch);
  switch(ch)
  {
  case 1:
  alinear(a,n,key);
  break;
  case 2:
  abinary(a,n,key);
  break;
  case 3:
  break;
  default:printf("Invalid Choice");
  }
  }
  getch();
  }
  void alinear(int p[],int m,int k)
  {
  int c=-1,i;
  for(i=0;i<m;i++)
  if(p[i]==k)
  {c=i;break;}

  if(c==-1)
  printf("\n%d is not found among the elements\n",k);
  else
  printf("\n%d is found at %d position\n",k,c);

  }
  void abinary(int p[],int m,int k)
  {
  int l=0,r=m,mid,c=-1;
  while(r>=l)
  {
  mid=(r+l)/2;
  if(p[mid]==k)
  {
  c=mid;
  break;
  }
  else if(k>p[mid])
  l=mid+1;
  else
  r=mid-1;
  }
  if(c==-1)
  printf("\n%d is not found among the elements\n",k);
  else
  printf("\n%d is found at %d position\n",k,c);

  }
