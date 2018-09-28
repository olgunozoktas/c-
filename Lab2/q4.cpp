#include <iostream>

using namespace std;

int main()
{

	int choice;
	int radius;
	int area;

	cout << "1- Calcualte the volume of cube" << endl;
	cout << "2- Calculate the area of the sphere" << endl;
	cout << "3- Calculate the area of the cylinder" << endl;
	cout << "Enter the choice (1-3): ";
	cin >> choice;

	switch(choice){
		case 1:
			cout << "--------Volume of the cube------------" << endl;
			cout << "Please enter the area of the cube: ";
			cin >> area;
			cout << "Volume of the cube is: " << area * area * area;
			break;
		case 2:
			cout << "--------Area of the sphere-----------" << endl;
			cout << "Please enter the radius of the sphere: ";
			cin >> radius;
			cout << "Area of the sphere is: " << 4 * (3.14 * (radius * radius));
			break;
		case 3:
			int height;
			cout << "--------Area of the Cylinder----------" << endl;
			cout << "Please enter the radius of the cylinder: ";
			cin >> radius;
			cout << "Please enter the height o the cylinder: ";
			cin >> height;
			cout << "Area of the Cylinder is: " << (2 * 3.14 * radius * height) + (2 * 3.14 * (radius * radius));
			break;
		default: cout << "You cannot select this";
	}
	
    return 0;
}