#include <stdio.h>

int main() {
        int N;
	float inc;
	printf("Enter a positive integer:\n");
        scanf(" %d", &N);
        if (N <= 0) {
                printf("Invalid input. Please enter a positive integer.\n");
                return 1; // Exit the program
                }
	printf("Enter an increment between 0 and 1:\n");
        scanf(" %f", &inc);
        if (inc < 0 || inc >= 1) {
                printf("Invalid input. Please enter an increment between 0 and 1.\n");
		return 1;
	}
        float i = 0; 
	while (i <= N) {
               printf("%.2f ", i);
	       i = i + inc;
        }
        printf("\n");
        return 0;
}

