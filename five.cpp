//five.cpp Ask user for a number
// Aadil Ali 01/27/2023

#include <iostream>
using namespace std;

int main()

{
	int number = 0;

	cout << "Enter any number: ";
	cin >> number;


	cout << "Add 10 to the number";
	cin >> number + 10;
	cout << "subtract 4 from result";
	cin >> (number+ 10) - 4;
	cout << "subtract the initial number from the result";
	cin >> (number+10) - 4) - number;
	cout << "subtract 1 from the result";
	cin >> ((number+10) - 4) - number) - 1;
	cout << number << endl;


	return (0);
}