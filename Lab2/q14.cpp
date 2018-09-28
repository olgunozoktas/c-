#include <iostream>

using namespace std;

int main()
{
	for(int i=20; i<=100; i += 5){

		cout << i << "F" << "\t" << (5 * (i - 32)) / 9 << "C" << endl; 

	}

    return 0;
}