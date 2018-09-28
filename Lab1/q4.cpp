#include <iostream>

using namespace std;

int main()
{
	int principal;
	float interest;
	int year;

	cout << "Please enter principal: ";
	cin >> principal;

	cout << "Please enter rate: ";
	cin >> interest;

	cout << "Please enter time: ";
	cin >> year;

	cout << "Simple Interest is: " << (principal * interest * year) / 100;

    return 0;
}
