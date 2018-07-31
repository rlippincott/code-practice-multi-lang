#include <iostream>
#include <iomanip>

using namespace std;




int main() {
	int accountNumber, minutesUsed, selection;
	char serviceCode;
	double serviceCost, premiumCost;

	do {

	cout << "Welcome to the billing system for the phone company. press 1 to calculate your bill cost or 0 to exit" << endl;

	cin >> selection;
	
	cout << "Please enter your account number, service code, and minutes used separated by spaces." << endl;

	cin >> accountNumber >> serviceCode >> minutesUsed;

	char actualServiceCode = toupper(serviceCode);
	
		switch (actualServiceCode) {
		case 'R':
			serviceCost = ((.2 * (minutesUsed - 50)) + 10);
			cout << "Account number: " << accountNumber << "\nService Code: " << actualServiceCode << "\nMinutes Used: " << minutesUsed << "\nAmount Due: $" << serviceCost << endl;
			break;
		case 'P':
			cout << "Please enter the minutes used during the day and then the minutes used at night, separated by a space." << endl;
			int dayMinutes, nightMinutes;
			cin >> dayMinutes >> nightMinutes;

			premiumCost = ((.05 * (nightMinutes - 100)) + (.1 * (dayMinutes - 75))) + 25;

			cout << "Account number: " << accountNumber << "\nService Code: " << actualServiceCode << "\nMinutes Used: " << minutesUsed << "\nAmount Due: " << premiumCost << endl;
			break;
		default:
			cout << "Invalid service code. Please enter R for Regular service or P for premium service." << endl;
			break;
		}
	} while (selection != 0);
}