#include <iostream>

using namespace std;

int main()
{

	int temperature;

	cout << "Please enter the temperature of the day: ";
	cin >> temperature;

	if(temperature > -5 && temperature <= 15) cout << "It has to be winter";
	else if(temperature >= 15 && temperature < 30) cout << "It might be autumn or spring time";
	else cout << "It's definitely summer";

    return 0;
}