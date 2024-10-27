#include <stdio.h>

int main() {
        int N;
        printf("Enter a positive integer:\n");
        scanf(" %d", &N);
	if (N < 0)
		printf("Invalid input. Please enter a positive integer.\n");
        for (int i = N; i <= N; i--) {
	       printf("%d ", i);
	       if (i == 0)
		       break;
	}	       
	printf("\n");
        return 0;
}
