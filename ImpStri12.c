//Implementation of Inbuilt String Functions

#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
  char a[100],b[100],str[100],choice;int c,ch;
  clrscr();
  printf("Enter the string\n");
  gets(a);
  do
  {
    printf("Menu\n*****\n1.Length Of String\n2.Reverse\n3.Concatenation\n4.Copy\n5.Comparision\nEnter your choice:");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1:
      c=strlen(a);
      printf("The length of the String is %d\n",c);
      break;
      case 2:
      printf("Reversed String is %s\n",strrev(a));
      break;
      case 3:
      printf("Enter the second String: ");
      scanf("%s",b);
      strcat(strrev(a),b);
      printf("\nNew string is ");
      puts(a);
      break;
      case 4:
      printf("Enter the string to be copied\n");
      scanf("%s",str);
      printf("Copied String is %s\n",strcpy(a,str));
      break;
      case 5:
      printf("Enter the next string\n");
      scanf("%s",str);
      if(strcmp(a,str)==0)
        printf("The strings are the same\n");
      else
        printf("The strings are not the same\n");
      break;
      default:printf("Invalid choice\n");
    }
    printf("Do you want to continue(Y/N)?:\n");
    choice=getch();
  }while(choice=='y'||choice=='Y');
  getch();
}
