//Ryan Lippincott CS265
//includes iostream header file
#include <iostream>

//adds std prefix
using namespace std;

int main()
{
	//declares int variables
	int num1, num2, num3, average;
	//stores new values to existing int variables
	num1 = 125;
	num2 = 28;
	num3 = -25;
	//calculates and stores average into existing variable
	average = (num1 + num2 + num3) / 3;
	//prints data
	cout << "num1: " << num1 << "\nnum2: " << num2 << "\nnum3: " << num3 << "\naverage: " << average << endl;
}