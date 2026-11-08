//  This is a menu-based calculator program that allows the user to repeatedly use an arithmetic function.
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

	{

		if

			// Menu Display

			cout << "Please select an operation from the menu below: " << endl;
			cout << "1. Add" << endl;
			cout << "2. Subtract" << endl;
			cout << "3. Multiply" << endl;
			cout << "4. Divide" << endl;
			cout << "Enter your choice: ";
			cin >> choice;

			if (choice > 4 || choice < 1)
			{
			cout << "Invalid selection. Please try again." << endl;
			}
			
			cout << fixed << setprecision(9);

			// Response to Menu Selection

			//Addition up to 3 Numbers

			double number1, number2;


			if (choice == ADD) //Chooses the addition function
			{
			cout << "You selected Addition. " << endl;
			}

			// Addition Menu
			cout << "Please enter a number: ";
			cin >> number1;
			cout << "Please enter another number: ";
			cin >> number2;

			if (number1 < 0 || number2 < 0)
			{
			cout << "Please enter a positive number. Please try again." << endl;
			}

			cout << "Your answer is: " << number1 + number2 << endl;


			// Subtraction up to 3 numbers


			if (choice == SUBTRACT) // Chooses the subtraction function

			{
			cout << "You selected Subtraction. " << endl;
			}


			// Subtraction Menu
			cout << "You selected Subtraction. " << endl;
			cout << "Please enter a number: ";
			cin >> number1;
			cout << "Please enter another number: ";
			cin >> number2;

			if (number1 < number2)

			{
			cout << "The first number must be greater than the second number. Please try again." << endl;
			}

			cout << "Your answer is: " << number1 - number2 << endl;


			// Multiplication up to 3 Numbers


			if (choice == MULTIPLY)

			{
			cout << "You selected Multiplication. " << endl;
			}

			// Multiplication Menu
			cout << "You selected Multiplication. " << endl;
			cout << "Please enter a number: ";
			cin >> number1;
			cout << "Please enter another number: ";
			cin >> number2;
			cout << "Your answer is: " << number1 * number2 << endl;
	

			// Division up to 3 Numbers


			if (choice == DIVIDE)


			{
			cout << "You selected Division. " << endl;
			}

			// Division Menu
			cout << "You selected Division. " << endl;
			cout << "Please enter a number: ";
			cin >> number1;
			cout << "Please enter another number: ";
			cin >> number2;

			if (number2 == 0)

			{
			cout << "Division by zero is not allowed. Please try again." << endl;
			}
	}
	return 0;

}