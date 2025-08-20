#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int a, b;
	float result;
	
	printf("Enter two integers: ");
	scanf("%d %d", &a, &b);
	
	result = (float)a / b;
	printf("%d / %d = %f\n", a, b, result);
	
	return 0;
}
