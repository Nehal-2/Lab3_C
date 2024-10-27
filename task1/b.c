#include <stdio.h>

int main() {
        int N;
        printf("Enter a positive integer:\n");
        scanf(" %d", &N);
        if (N <= 0) {
                printf("Invalid input. Please enter a positive integer.\n");
		return 1; // Exit the program
		}
	for (int i = 1; i <= N; i++) {
	// Check if the number contains the digits 4 or 7:
		if ((i + 3)%10 == 0 || (i + 6)%10 == 0)
			continue;
                printf("%d ", i);
        }
	printf("\n");
        return 0;
}
