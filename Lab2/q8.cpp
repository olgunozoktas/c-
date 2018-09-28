#include <iostream>

using namespace std;

int main()
{
	int total = 1;
	for(int i=1; i<=10; i++){
		total = total * i;
	}

	cout << "Product is: " << total << endl;
	
    return 0;
}