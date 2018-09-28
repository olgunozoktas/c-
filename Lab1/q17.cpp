#include <iostream>

using namespace std;

int main()
{
    int number_of_cars;

    cout << "Please enter how many cars do you have: ";
    cin >> number_of_cars;

    if(number_of_cars > 0 ) cout << "Nice.";
    else if(number_of_cars >= 2 && number_of_cars < 10) cout << "I think you are earning really well."
    else if(number_of_cars >= 10) cout << "You are rich!";
    
    return 0;
}
