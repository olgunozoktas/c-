#include <iostream>

using namespace std;

int main()
{
	int distance;

	cout << "Please enter the distance in kilometer: ";
	cin >> distance;

	cout << "The mile per hour of " << distance << " km/hr is " << distance * 0.6213712 << " ml/hr"; 

    return 0;
}