//String Searching And Replacement

#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
char a[50][50],b[50],c[50];int n,i,j;
clrscr();
printf("Enter the number of words\n");
scanf("%d",&n);
printf("Enter the string\n");
for(i=0;i<n;i++)
scanf("%s",a[i]);

printf("Enter the word to be replaced\n");
scanf("%s",b);

printf("Enter the repacement word\n");
scanf("%s",c);

for(i=0;i<n;i++)
if(strcmp(a[i],b)==0)
strcpy(a[i],c);

printf("The new string is: ");
for(i=0;i<n;i++)
printf("%s ",a[i]);
getch();
}
