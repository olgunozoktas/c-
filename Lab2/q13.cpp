#include <iostream>

using namespace std;

int main()
{
	int evens = 0;
	int odds = 0;
	int value;

	cout << "Please enter a value greather than 40: ";
	cin >> value;


	for(int i=value; i>0; i--){
		
		if(i % 2 == 0) evens += i;
		else odds += i;
	}

	cout << "Sum of all even numbers: " << evens << endl;
	cout << "Sum of all odd numbers: " << odds << endl;
	
    return 0;
}

