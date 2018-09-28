#include <iostream>

using namespace std;

int main()
{
	int total = 0;

	for(int i=2; i<=6; i++){

		total += (i * i) + i;
	}

	cout << "Sum is: " << total;

    return 0;
}