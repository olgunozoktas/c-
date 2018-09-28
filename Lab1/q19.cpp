#include <iostream>

using namespace std;

int main()
{
    int age;

    cout << "Please enter your age: ";
    cin >> age;

    if(age < 50) cout << "You are young";
    else if(age >= 50 && age <= 75) cout << "Don't worry, you are not that old";
    else cout << "You are really old dude";

    return 0;
}
