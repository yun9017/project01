#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int sumTwo(int a, int b) {
	return a + b;
}

int square(int n) {
	return n * n;
}

int get_max(int x, int y){
	if (x > y)
		return x;
	else
		return y;
}

int main() {
	int a, b;
	
	printf("Enter the intergers: ");
	scanf("%d %d", &a, &b);
	
	printf("Result - Sum: %d, Square: %d, Max: %d\n", sumTwo(a, b), square(a), get_max(a, b));

	return 0;
}
