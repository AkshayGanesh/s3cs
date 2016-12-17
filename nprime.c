// Sum of n primes

#include <stdio.h>
//#include <conio.h>

int main(void) {
	int i, j, c = 0, n, flag = 0;
	//clrscr();
	printf("Enter the value of n :");
	scanf("%d", &n);
	for(i = 2;;i++) {
		for(j = 2;j <= i/2;i++) {
			if(i%j == 0) {
				printf("%d\n", i);
				flag = 1;
				break;
			}
		}
		if(flag == 0) {
			printf("%d\n", i);
			c++;
		}
		flag = 0;
		if(c == n)
			break;
	}
	//getch();
}