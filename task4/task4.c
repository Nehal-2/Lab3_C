#include <stdio.h>

int main() {
        int x, y;
	char chDir;
        printf("Enter the coordinates of your initial position in the form x y: ");
        scanf(" %d %d", &x, &y);
	// Check if the initial position is within the boundaries:
        if (x < 1 || x > 4 || y < 1 || y > 4) {
                printf("Invalid input. Please enter coordinates within a 4x4 grid.\n");
                return 1; // Exit the program
                }
	while (1) {
		printf("In which direction do you want to move?:\n");
		printf("Enter U for up, D for down, R for right, and L for Left: ");
	        scanf(" %c", &chDir);
 		if (chDir == 'U') {
			if (y == 1) {
				printf("The player has reached the boundary at (%d,%d).\n", x, y);
				break;
			} else {
				y -= 1;
				printf("The player is at (%d,%d).\n", x, y); 
			}
		} else if (chDir == 'D') {
			if (y == 4) {
				printf("The player has reached the boundary at (%d,%d).\n", x, y);
				break;
			} else {
				y += 1;
				printf("The player is at (%d,%d).\n", x, y);
                        }
		} else if (chDir == 'R') {
			if (x == 4) {
				printf("The player has reached the boundary at (%d,%d).\n", x, y);
				break;
			} else {
				x += 1;
				printf("The player is at (%d,%d).\n", x, y);
                        }
		} else if (chDir == 'L') {
			if (x == 1) {
				printf("The player has reached the boundary at (%d,%d).\n", x, y);
				break;
			} else {
				x -= 1;
				printf("The player is at (%d,%d).\n", x, y);
                        }
		} else {
			printf("Invalid input. Please enter 'U', 'D', 'R', or 'L' only.\n");
			continue;
		}		
	}
        return 0;
}
