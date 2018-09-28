#include <iostream>

using namespace std;

int main()
{
	int radius;

	cout << "Please enter radius of the sphere: ";
	cin >> radius;

	cout << "Volume of the sphere is: " << 4 * (3.14 * (radius * radius * radius)) / 3;

    return 0;
}