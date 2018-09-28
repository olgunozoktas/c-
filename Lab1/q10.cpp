#include <iostream>

using namespace std;

int main()
{
	int number1;
	int number2;
	int number3;
	int number4;

	cout << "Please enter number1: ";
	cin >> number1;

	cout << "Please enter number2: ";
	cin >> number2;

	cout << "Please enter number3: ";
	cin >> number3;

	cout << "Please enter number4: ";
	cin >> number4;

	cout << "Average: " << (number1 + number2 + number3 + number4) / 4;
    return 0;
}