#include <iostream>

using namespace std;

int main()
{
    int cost;
    int selling;
    int profit;
    
    cout << "Please enter the cost of the product: ";
    cin >> cost;

    cout << "Please enter the price of the product: ";
    cin >> selling;

    profit = selling - cost;

    if(profit > 0) { cout << "Profit "; } else cout << "Loss";

    return 0;
}
