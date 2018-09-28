#include <iostream>

using namespace std;

int main()
{

	int choice;
	int days;
	int total;

	cout << "1- Deluxe Suit --> 1500$/day" << endl;
	cout << "2- Normal Suit --> 750$/day" << endl;
	cout << "3- Deluxe Room --> 250$/day" << endl;
	cout << "4- Normal Room --> 125$/day" << endl;
	cout << "Please choose the room you want to reserve: ";
	cin >> choice;

	cout << "Please enter how many days you want to reserve the room: ";
	cin >> days;

	if(choice == 1) total = days * 1500;
	else if(choice == 2) total = days * 750;
	else if(choice == 3) total = days * 250;
	else if(choice == 4) total = days * 125;

	cout << "Total Money: " << total;
	
    return 0;
}