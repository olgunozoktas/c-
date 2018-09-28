#include <iostream>

using namespace std;

int main()
{
    int number1;
    int number2;
    //int year;
    
    cout << "Please enter number 1: ";
    cin >> number1;

    cout << "Please enter number 2: ";
    cin >> number2;

    if(number1 > number2) cout << "Biggest Number is: " << number1;
    else if(number1 < number2) cout << "Biggest Number is: " << number2;
    else cout << "They are equal";

    return 0;
}
