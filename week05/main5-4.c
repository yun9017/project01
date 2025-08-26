#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int year;
	
	printf("Input the year: ");
	scanf("%d", &year);
	
	if ((year % 4 == 0 && year % 100 != 0 ) || ( year % 400 == 0 )) {
		printf("Is the year %d the leap year? 1\n", year);
	} 
	else {
		printf("Is the year %d the leap year? 0\n", year);
	}
	
	return 0;
}
