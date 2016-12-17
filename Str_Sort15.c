//String Sorting

#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
int i,j,n;char str[50][50],temp[50];
clrscr();
printf("Enter the limit of the string\n");
scanf("%d",&n);
n++;
printf("Enter the strings:");
for(i=0;i<n;i++)
gets(str[i]);

for(i=0;i<n-1;i++)
for(j=i+1;j<n;j++)
if(strcmp(str[i],str[j])>0)
{
strcpy(temp,str[i]);
strcpy(str[i],str[j]);
strcpy(str[j],temp);
}

for(i=0;i<n;i++)
puts(str[i]);
getch();
}
