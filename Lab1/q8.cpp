#include <iostream>

using namespace std;

int main()
{
	int angle1;
	int angle2;

	cout << "Please enter the value of angle1: ";
	cin >> angle1;

	cout << "Please enter the value of angle2: ";
	cin >> angle2;

	cout << "Angle1 is: " << angle1;
	cout << "\nAngle2 is: " << angle2;
	cout << "\nAngle3 is: " << 180 - (angle1 + angle2);

    return 0;
}