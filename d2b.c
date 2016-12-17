// Program to convert decimal to binary

#include <stdio.h>
//#include <conio.h>

int main(void) {
	int n, m = 1, r = 0;
	//clrscr();
	printf("Enter the value of n:");
	scanf("%d", &n);
	while(n >= 1) {
		r += m * (n % 2);
		m *= 10;
		n = n / 2;
	}
	printf("The binary digit is %d:", r);
	//getch();
	return 0;
}
