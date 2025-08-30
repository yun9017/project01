#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int factorial(int num){
	int res =1;
	int i;
	for (i = 1; i<= num; i++) {
		res *= i;
	}
	return res;
}

int combination(int n, int r){
	return factorial(n) / (factorial(n-r)*factorial(r));
}

int get_interger(char *msg){
	int val;
	printf("%s", msg);
	scanf("%d", &val);
	return val;
}

int main(void) {
	int n, r, result;
	
	n = get_interger("Enter the value n: ");
	r = get_interger("Enter the value r: ");
	
	result = combination(n,r);
	printf("The result of C(%d, %d) is %d\n", n, r, result);
	
	return 0;
}
