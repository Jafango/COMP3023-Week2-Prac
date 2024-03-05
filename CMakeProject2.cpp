#include <iostream>
/* function to read number from standard input (keyboard) */ int getNumber();
/* function to calculate the sum of two numbers */
int calculateSum(int, int);
/* function to display details to the screen */
void displayDetails();
int main() {
	int num1 = 0; /* first number to be entered by user */
	int num2 = 0; /* second number to be entered by user */
	int sum = 0; /* stores sum of two numbers */
	displayDetails();
	/* prompt for and read first number */
	std::cout << "Please enter first number : ";
	num1 = getNumber();
	/* prompt for and read second number */
	std::cout << "Please enter second number: ";
	num2 = getNumber();
	/* add two numbers together and display to screen */
	sum = calculateSum(num1, num2);
	std::cout << std::endl << "\nSum of " << num1 << " and " << num2 << " is: " <<
		sum << std::endl << std::endl;
	return 0;
}
/* function to read number from standard input (keyboard) */
int getNumber() {
	int num;
	std::cin >> num;
	return num;
}
/* function to calculate the sum of two numbers */
int calculateSum(int number1, int number2) {
	return number1 + number2;
}
/* function to display details to the screen */
void displayDetails() {
	std::cout << "Author : Your Name" << std::endl;
	std::cout << "Stud ID : Your Student Id" << std::endl;
	std::cout << "Email : Your Email" << std::endl;
}