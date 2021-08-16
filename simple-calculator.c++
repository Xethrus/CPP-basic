#include <iostream>

using namespace std:

int main()
{
	char user_choice;
	float num1, num2;
	cout << "Welcome to Calculator \n\n";
	cout << "Enter (*,+,-,/) to continue\n";
	cin >> user_choice;
	cout<< "Enter input 1 & 2";
	cin >> num1 >> num2;


	switch(op) {
		case '*':
			cout << num1 << " * " << num2 << " =  " << num1 * num2;
			break;
		case '+':
			cout << num1 << " + " << num2 << " = " << num1 + num2;
			break;
		case '-':
			cout << num1 << " - " << num2 << " = " << num1 - num2;
			break;
		case '/ ':
			cout << num1 << " / " << num2 << " = " << num1 / num2;
			break;

		default:
			cout << "ERROR Unrecognized Operator";
			break;


	} 
	return 0;
}