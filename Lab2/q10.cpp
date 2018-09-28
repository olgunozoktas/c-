#include <iostream>

using namespace std;

int main()
{
	int value;
	int factorial = 1;

	cout << "Please enter a number to calculate factorial: ";
	cin >> value;

	for(int i=value; i>0; i--){
		
		factorial = factorial * i;
	}

	cout << "Factorial of " << value << " is: " << factorial;
	
    return 0;
}