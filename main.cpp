//  This is a menu-based program that allows the user to repeatedly use an arthimetic function.
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()

{

	int choice;
	
	// Menu Constants
	
	const int ADD = 1;
	const int SUBTRACT = 2;
	const int MULTIPLY = 3;
	const int DIVIDE = 4;

// Menu Display
	cout << "Please select an operation from the menu below: " << endl
		 << "1. Add" << endl
		 << "2. Subtract" << endl
		 << "3. Multiply" << endl
		 << "4. Divide" << endl
		 << "Enter your choice: ";
	cin >> choice;

	cout << fixed << setprecision(9);

// Response to Menu Selection
	if (choice == ADD)
	{
		cout << "You selected Addittion. " << endl;
	}
	else if (choice == SUBTRACT)
	{
		cout << "You selected Subtraction. " << endl;
	}
	else if (choice == MULTIPLY)
	{
		cout << "You selected Multiplication. " << endl;
	}
	else if (choice == DIVIDE)
	{
		cout << "You selected Division. " << endl;
	}
	else
	{
		cout << "Invalid selection. Please try again." << endl;
	
	}
	return 0;

}
