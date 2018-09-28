#include <iostream>

using namespace std;

int main()
{
    int toy;
    int total;
    
    cout << "Please enter number of toys you want to buy: ";
    cin >> toy;

    total = toy * 20;

    if(total > 100) {
        total = total - (total * 0.10);
        cout << "Discount! Total Price is: " << total;
    }else
    cout << "Total Price is: " << total;

    return 0;
}
