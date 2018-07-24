#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main()

{
	ifstream inFile;
	ofstream outFile;

	string firstName, lastName, departMent;
	int coffeeSold;
	double monthlySalary, bonusPercent, taxesPercent, distanceTraveled, travelTime, coffeeCost, payCheck, averageSpeed, salesTotal, paycheckSubtotal;

	inFile.open("inData.txt");

	if (!inFile)
	{
		cout << "Cannot open the input file. Please make sure the file name is inData.txt and try again. Exiting..." << endl;
	}

	outFile.open("outData.txt");

	outFile << fixed << showpoint;
	outFile << setprecision(2);

	inFile >> firstName >> lastName >> departMent;
	outFile << "Name: " << firstName << " " << lastName << " Department: " << departMent << endl;

	inFile >> monthlySalary >> bonusPercent >> taxesPercent;
	outFile << "Monthly Gross Salary: " << monthlySalary << ", Monthly Bonus: " << bonusPercent << "%, Taxes: " << taxesPercent << "%" << endl;

	//calculate payCheck here
	paycheckSubtotal = (monthlySalary + (monthlySalary * (bonusPercent * .01)));
	payCheck = (paycheckSubtotal - (paycheckSubtotal * (taxesPercent * .01)));

	outFile << "Paycheck: $" << payCheck << endl;

	inFile >> distanceTraveled >> travelTime;
	outFile << "Distance Traveled: " << distanceTraveled << ", Traveling Time: " << travelTime << " hours" << endl;

	//calculate averageSpeed here
	averageSpeed = (distanceTraveled / travelTime);

	outFile << "Average Speed: " << averageSpeed << " miles per hour" << endl;

	inFile >> coffeeSold >> coffeeCost;
	outFile << "Number of Coffee Cups Sold: " << coffeeSold << ", Cost: $" << coffeeCost << " per cup" << endl;

	//calculate salesTotal here
	salesTotal = (coffeeSold * coffeeCost);

	outFile << "Sales Amount = $" << salesTotal << endl;

	inFile.close();
	outFile.close();
}