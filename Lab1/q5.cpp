#include <iostream>

using namespace std;

int main()
{
	int radius;
	int height;

	cout << "Please enter radius: ";
	cin >> radius;

	cout << "Please enter height: ";
	cin >> height;

	cout << "Volume of the cylinder is: " << 3.14 * (radius * radius) * height;

    return 0;
}
