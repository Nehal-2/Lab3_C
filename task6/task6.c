#include <stdio.h>

int main() {
        int N;

        printf("Enter the number of terms (N): ");
        scanf(" %d", &N);

	int F[N];

	if (N >= 1)
		F[0] = 1;
	if (N >= 2)
		F[1] = 1;

        for (int i = 2; i < N; i++) {
		F[i] = F[i - 1] + F[i - 2];
        }

        printf("Fibonacci Series up to %d terms:\n", N);
	for (int i = 0; i < N; i++) {
		printf("%d", F[i]);
		if (i < N -1) {
			printf(", ");
		}
	}
	printf("\n");
        return 0;
}
