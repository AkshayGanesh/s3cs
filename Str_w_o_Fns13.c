//String length,Reverse and concatenation without using inbuilt function

#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
int c=0,i,k=-1;char str[50],str1[50];
clrscr();
printf("Enter the string\n");
gets(str);
for(i=0;str[i]!='\0';i++)
c++;
printf("The length of the string is %d\n",c);

printf("Reversed string is ");
for(i=c-1;i>=0;i--)
printf("%c",str[i]);printf("\n");

printf("Enter the second string for concatenation: ");
gets(str1);
for(i=c;str1[k++]!='\0';i++)
str[i]=str1[k];
printf("The concatenated string is %s",str);
getch();
}
