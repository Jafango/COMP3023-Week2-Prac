#include <iostream>
/* The following are function declarations. They _declare_ that the functions
exist but they do not _define_ what the functions actually do (the definitions
appear after the main function). By declaring these functions here, they may be
called in the main before they are defined.
Note: function1 expects an int type, whereas function2 expects a pointer to an int
*/
void function1(int);
void function2(int*);
int main() {
	int number = 10;
	/* C1. display the contents of number to the screen */
	std::cout << "'number' equals to " << number << std::endl;
	/* C2. display the address of variable number to the screen */
	std::cout << "The address of 'number' equals to " << &number << std::endl;
	/* C3. call function1 */
	function1(number);
	/* C4. display the contents of number to the screen */
	std::cout << "after calling 'function1', 'number' is now equal to " << number << std::endl;
	/* C5. call function2 */
	function2(&number);
	/* C6. display the contents of number to the screen */
	std::cout << "after calling 'function2', 'number' is now equal to " << number << std::endl;
	return 0;
}
void function1(int number)
{
	/* C7. increment number by one */
	number = number + 1;
	/* C8. display the contents of number to the screen (should be 11) */
	std::cout << "in 'function1', 'number' is now equal to " << number << std::endl;
	/* C9. display the address of number to the screen */
	std::cout << "in 'function1', the address of 'number' is " << &number << std::endl;
}
void function2(int* numberPtr)
{
	/* C10. display the address of number to the screen (should be the same
	address as you displayed first in main) */
	std::cout << "in 'function2', the value of 'numberPtf', the pointer of 'number' is " << numberPtr << std::endl;
	/* C11. display the value that the pointer numberPtr points to */
	std::cout << "in 'function2', the value of 'number' is " << *numberPtr << std::endl;
	/* C12. increment the value stored in number */
	*numberPtr = *numberPtr + 1;
	/* C13. display the contents of number to the screen */
	std::cout << "in 'function2', the value of 'number' is now " << *numberPtr << std::endl;
}