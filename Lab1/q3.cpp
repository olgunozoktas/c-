#include <iostream>

using namespace std;

int main()
{
	int a;
	int b;
	int c;

	cout << "Please enter Value 1: ";
	cin >> a;

	cout << "Please enter Value 2: ";
	cin >> b;

	cout << "Please enter Value 3: ";
	cin >> c;

	cout << "Values in forward:\n";
	cout << a << "," << b << "," << c;
	cout << "\n";

	cout << "Values reverse order:\n";
	cout << c << "," << b << "," << a;

    return 0;
}
