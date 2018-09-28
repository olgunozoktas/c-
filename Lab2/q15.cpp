#include <iostream>

using namespace std;

int main()
{
	int total = 0;
	float average;

	for(int i=0; i<10; i++){

		int age;
		cout << "Student " << i + 1 << " age is: ";
		cin >> age;

		total = total + age;
	}

	average = total / 10;

	cout << "Average is: " << (float)average;

    return 0;
}