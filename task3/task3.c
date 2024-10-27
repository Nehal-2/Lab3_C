#include <stdio.h>

int main() {
        int iCities;
	int iMax, iMin;
	float fSum = 0;
	float fMean;
        printf("Enter the number of cities:\n");
        scanf(" %d", &iCities);
        if (iCities <= 0) {
                printf("Invalid input. Please enter a positive integer.\n");
                return 1; // Exit the program
                }

	int iPopulation[iCities];

        for (int i = 0; i < iCities; i++) {
                printf("Enter the population of city %d:\n", i+1);
		scanf("%d", &iPopulation[i]);

		if (i == 0) 
			iMax = iMin = iPopulation[i];
		else {
			if (iPopulation[i] > iMax)
				iMax = iPopulation[i];
			if (iPopulation[i] < iMin)
				iMin = iPopulation[i];
		}
		fSum += iPopulation[i]; 
        }
	fMean = fSum/iCities;

	printf("Mean population: %.2f\n", fMean);
	printf("Maximum population: %d\n", iMax);
	printf("Minimum population: %d\n", iMin);
        return 0;
}
