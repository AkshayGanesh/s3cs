//Bubble Sort using function

#include <stdio.h>
#include <conio.h>
void bubble(int[],int);
void main()
{
	int a[50],n,i;
	clrscr();
	printf("Enter the number of elements in the array\n");
	scanf("%d",&n);
	printf("Enter the elements\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	bubble(a,n);
	getch();
}
void bubble(int p[],int m)
{
	int temp,i,j;
	for(i=0;i<m-1;i++)
	for(j=0;j<m-i-1;j++)
	if(p[j]>p[j+1])
	{
		temp=p[j];
		p[j]=p[j+1];
		p[j+1]=temp;
	}
	printf("The sorted elements are\n");
	for(i=0;i<m;i++)
	printf("%d\n",p[i]);
}
