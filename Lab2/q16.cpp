#include <iostream>

using namespace std;

int main()
{
	int total = 0;

	for(int i=1; i<=5; i++){

		total += (i * i * i);
	}

	cout << "Result is: " << total;

    return 0;
}