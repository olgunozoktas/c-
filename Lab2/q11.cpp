#include <iostream>

using namespace std;

int main()
{
	int total = 0;


	for(int i=0; i<10; i++){
		
		int price;
		cout << "Please enter item " << i + 1 << " price : ";
		cin >> price;

		total = total + price; 
	}

	cout << "Total is: " << total << endl;
	
    return 0;
}