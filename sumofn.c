//Program to find sum of N Numbers

#include <stdio.h>
//#include <conio.h>

int main(void) {
	int n, s = 0, i, arr[10];
	//clrscr();
	printf("Enter the value of n:");
	scanf("%d", &n);
	for(i = 0;i < n; i++)
		scanf("%d", &arr[i]);
	for(i = 0;i < n; i++)
		s += arr[i];
	printf("The sum is %d", s);
	//getch()
	return 0;
}
