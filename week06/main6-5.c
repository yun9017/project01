#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	int a, b;
	char op;
	
	printf("Enter the calculation: ");
	scanf("%d %c %d", &a, &op, &b);
	
	switch (op) {
		case '+':
			printf("= %d\n", a+b);
			break;
		case '-':
			printf("= %d\n", a-b);
			break;
		case '*':
			printf("= %d\n", a*b);
			break;
		case '/':
			if (b != 0)
				printf("= %d\n", a/b);
			else
				printf("Error: division by zero\n");
			break;
		default:
			printf("Error: unknown operator\n");
	}
	
		return 0;
}
