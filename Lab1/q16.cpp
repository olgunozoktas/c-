#include <iostream>

using namespace std;

int main()
{
    int angle1;
    int angle2;
    int angle3;

    cout << "Please enter angle1: ";
    cin >> angle1;

    cout << "Please enter angle2: ";
    cin >> angle2;

    cout << "Please enter angle3: ";
    cin >> angle3;

    int total = angle1 + angle2 + angle3;

    if(total > 180 || total < 180) cout << "Triangle is not valid";
    else cout << "Triangle is valid";
    
    return 0;
}
