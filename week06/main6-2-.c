#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int num;
	
	printf("Enter an interger: ");
	scanf("%d", &num);
	
	if (num < 0) {
		num = -num;
	}
	
	printf("Absolute value: %d\n", num);
	
	return 0;
	}
