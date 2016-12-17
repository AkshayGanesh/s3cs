//Seperate positive and negative Numbers

#include <stdio.h>
//#include <conio.h>

int main(void) {
	int n, s = 0, i, arr[10], pos[10], neg[10], p = 0, n = 0;
	//clrscr();
	printf("Enter the value of n:");
	scanf("%d", &n);
	for(i = 0;i < n; i++) 
		scanf("%d", &arr[i]);
	for(i = 0;i < n; i++)
		if(arr[i] %2 == 0)
			pos[p++] = arr[i];
		else 
			neg[n++] = arr[i];
	printf("The positive numbers are\n");
	for(i = 0;i < p; i++) 
		printf("%d\n", pos[i]);
	printf("The negative numbers are\n");
	for(i = 0;i < n; i++) 
		printf("%d\n", neg[i]);
	//getch()
	return 0;
}
