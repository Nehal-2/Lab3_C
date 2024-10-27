#include <stdio.h>

int main() {
	int PIN;
	int currentPIN = 1234;
	char chOption;
        float fBalance = 0;
	float fDeposit = 0;
       	float fWithdraw = 0;

	printf("Welcome! You can select 'C' to check balance, 'D' to deposit, 'W' to withdraw, and 'E' to exit.\n");
	while(1) {
		printf("Please Input PIN: ");
		scanf(" %d", &PIN);
		if (PIN == currentPIN)
			printf("Access Granted.\n");
		else {
			printf("Incorrect PIN. Access Denied. Please Try Again.\n");
			continue;
		}
		while (1) {

			printf("Menu Selection: ");
			scanf(" %c", &chOption);
			switch (chOption) {
				case 'C':
					printf("Current Balance: %.2f SAR\n", fBalance);
					break;
				case 'D':
					printf("Input Amount to Deposit: ");
					scanf(" %f", &fDeposit);
					fBalance += fDeposit;
					printf("Successful Deposit! New Balance : %.2f SAR\n", fBalance);
					break;
				case 'W':
					printf("Input Amount to Withdraw: ");
					scanf(" %f", &fWithdraw);
					if (fWithdraw > fBalance)
						printf("Withdrawal failed! Insufficient funds.\n");
					else {
						fBalance -= fWithdraw;
						printf("Successful Withdraw! New Balance : %.2f SAR\n", fBalance);
					}
					break;
				case 'E':
					printf("Thank you for using the ATM. Goodbye!\n");
					return 0;
				default:
					printf("Invalid option. Please try again.\n");
					break;
			}	
		}
	}
        return 0;
}
