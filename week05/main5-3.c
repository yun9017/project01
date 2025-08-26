#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int seconds, minutes, remain;
	
	printf("Input the second: ");
	scanf("%d", &seconds);
	
	minutes = seconds / 60;
	remain = seconds % 60;
	
	printf("The time is %d : %d\n", minutes, remain);
	
	
	return 0;
}
