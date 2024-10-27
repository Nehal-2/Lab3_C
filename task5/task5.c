#include <stdio.h>
#include <ctype.h>

int main() {
        int N;
	int A = 0, E = 0, I = 0, U = 0, O = 0;
	int Others = 0;	
        char ch;
        printf("Enter the number of characters: ");
        scanf(" %d", &N);

	for (int i = 0; i < N; i++) {
		printf("Enter character No. %d: ", i + 1);
		scanf(" %c", &ch);
		ch = toupper(ch);
		switch (ch) {
			case 'A':
			       A++;
			       break;
			case 'E':
			       E++;
			       break;
			case 'I':
			       I++;
			       break;
			case 'U':
			       U++;
			       break;
			case 'O':
			       O++;
			       break;
			default:
			       Others++;
			       break;
		}
	}
	printf("Frequency of a = %d\n", A);
	printf("Frequency of e = %d\n", E);
	printf("Frequency of i = %d\n", I);
	printf("Frequency of u = %d\n", U);
	printf("Frequency of o = %d\n", O);
	printf("Frequency of others = %d\n", Others);

	return 0;
}
