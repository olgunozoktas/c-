#include <iostream>

using namespace std;

int main()
{

	int day;

	cout << "Please enter the day of the month: ";
	cin >> day;

	if(day > 0 && day <= 7) cout << "Week 1";
	else if(day >= 8 && day <= 14 ) cout << "Week 2";
	else if(day >= 15 && day <= 21) cout << "Week 3";
	else if(day >= 22 && day <= 31) cout << "Week 4";
	
    return 0;
}