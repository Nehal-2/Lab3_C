#include <stdio.h>
#include <stdbool.h>

int main() {
        int N;
	bool isPrime = 1; // Assume the number is prime
        printf("Enter a number to check if it is prime:\n");
        scanf(" %d", &N);
        if (N <= 1) {
                printf("Invalid input. Please enter an integer greater than 1.\n");
                return 1; // Exit the program
                }
	for (int i = 2; i*i <= N; i++) {
		if (N%i == 0){
			isPrime = 0;
			break;
		}
	}
	if (isPrime)
		printf("%d is a prime number.\n", N);
	else
		printf("%d is not a prime number.\n", N);

        return 0;
}
