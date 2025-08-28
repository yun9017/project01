#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int answer = 50;
	int guess;
	int tries = 0;
	
	do {
		printf("Guess a number: ");
		scanf("%d", &guess);
		tries++;
		
		if (guess < answer) {
			printf("Low!\n");
		}
		else if (guess > answer) {
			printf("High!\n");
		}
		else {
			printf("Congratulation! Trials: %d\n", tries);
		}
	} while (guess != answer);
	
	return 0;
}
