#include <iostream>

using namespace std;

int main()
{

	int number_of_hours;
	int hourly_rate;

	cout << "Please enter how many hours you have worked: ";
	cin >> number_of_hours;

	cout << "Please enter how much you are getting paid for per hour: ";
	cin >> hourly_rate;

	int total = number_of_hours * hourly_rate;

	cout << "Total is: " << total << endl;

	if(total >= 0 && total < 999) cout << "You should really consider finding another job";
	else if(total >= 1000 && total <= 1999) cout << "It's Nice but you can find another job";
	else if(total >= 2000 && total <= 3499) cout << "Good Job!";
	else cout << "You earn good dude.";

    return 0;
}