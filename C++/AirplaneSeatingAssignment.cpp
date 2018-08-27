#include <iomanip>
#include <iostream>

using namespace std;


//declare variables
int selection, row, column,rowSelection, columnSelection;
char planeSeating[13][6];

//Functions
void seatingFill(char planeSeating[][6]);
void printSeating(char planeSeating[][6]);
void addFirstClass(char planeSeating[][6], int rowSelection, int columnSelection);
void addBusinessClass(char planeSeating[][6], int rowSelection, int columnSelection);
void addEconomyClass(char planeSeating[][6], int rowSelection, int columnSelection);

int main() {
	seatingFill(planeSeating);

	do {
		cout << "Welcome to the Airplane Seating assignment. Please select one of the following: " << endl;
		cout << "1: View Seating Chart" << endl;
		cout << "2: Add First Class" << endl;
		cout << "3: Add Business Class" << endl;
		cout << "4: Add Economy Class" << endl;
		cout << "0: Exit" << endl;
		cin >> selection;

		switch (selection) {
		case 1:
			printSeating(planeSeating);
			break;
		case 2:
			cout << "Please enter the row choice (1-2):" << endl;
			cin >> rowSelection;
			cout << "Please enter the column choice (1-6):" << endl;
			cin >> columnSelection;
			addFirstClass(planeSeating, rowSelection - 1, columnSelection - 1);
			break;
		case 3:
			cout << "Please enter the row choice (3-7):" << endl;
			cin >> rowSelection;
			cout << "Please enter the column choice (1-6):" << endl;
			cin >> columnSelection;
			addBusinessClass(planeSeating, rowSelection - 1, columnSelection - 1);
			break;
		case 4:
			cout << "Please enter the row choice (8-13):" << endl;
			cin >> rowSelection;
			cout << "Please enter the column choice (1-6):" << endl;
			cin >> columnSelection;
			addEconomyClass(planeSeating, rowSelection - 1, columnSelection - 1);
			break;
		case 0:
			cout << "Exiting..." << endl;
			break;
		}
	}
	while (selection != 0);
}
void seatingFill(char planeSeating[][6]) {
	for (int row = 0; row <= 13; row++) {
		for (int column = 0; column < 6; column++) {
			planeSeating[row][column] = '*';
		}
	}
}
void printSeating(char planeSeating[][6]) {
	cout << "Available seats are marked with a *." << endl;
	for (int row = 0; row <= 13; row++) {
		for (int column = 0; column < 6; column++) {
			cout << setw(6) << planeSeating[row][column];
		}
		cout << endl;
	}
}
void addFirstClass(char planeSeating[][6], int rowSelection, int columnSelection) {
	if (rowSelection <= 2) {
		for (int row = 0; row < 1; row++) {
			for (int column = 0; column < 6; column++) {
				if (planeSeating[rowSelection][columnSelection] == '*') {
					planeSeating[rowSelection][columnSelection] = 'X';
				}
			}
		}
	}
	else {
		cout << "Invalid selection. Only row 1 and 2 are reseverd for first class." << endl;
	}
}
void addBusinessClass(char planeSeating[][6], int rowSelection, int columnSelection) {
	if (rowSelection <= 7 && rowSelection >= 3) {
		for (int row = 0; row < 1; row++) {
			for (int column = 0; column < 6; column++) {
				if (planeSeating[rowSelection][columnSelection] == '*') {
					planeSeating[rowSelection][columnSelection] = 'X';
				}
			}
		}
	}
	else {
		cout << "Invalid selection. Only rows 3-7 are reseverd for business class." << endl;
	}
}
void addEconomyClass(char planeSeating[][6], int rowSelection, int columnSelection) {
	if (rowSelection <= 13 && rowSelection >= 8) {
		for (int row = 0; row < 1; row++) {
			for (int column = 0; column < 6; column++) {
				if (planeSeating[rowSelection][columnSelection] == '*') {
					planeSeating[rowSelection][columnSelection] = 'X';
				}
			}
		}
	}
	else {
		cout << "Invalid selection. Only rows 3-7 are reseverd for economy class." << endl;
	}
}