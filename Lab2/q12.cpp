#include <iostream>

using namespace std;

int main()
{
	int greatest = 0;


	for(int i=0; i<5; i++){
		
		int value;
		cout << "Please enter value to number " << i + 1 << " : ";
		cin >> value;

		if(value > greatest) greatest = value;
	}

	cout << "Greatest number is: " << greatest << endl;
	
    return 0;
}