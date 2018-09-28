#include <iostream>

using namespace std;

int main()
{
    int choice;
    int order_count;
    int total;

    cout << "**Food Menu**\n";
    cout << "1- Pasta (6$)\n";
    cout << "2- Hamburger (7$)\n";
    cout << "3- Pizza (10$)\n";

    cout <<"Select which food type do you want to order (1-3): ";
    cin >> choice;

    if(choice == 1) cout << "How many Pasta would you like to order?: ";
    else if(choice == 2) cout << "How many Hamburgers would you like to order?: ";
    else cout << "How many Pizza would you like to order?: ";

    cin >> order_count;

    if(choice == 1) total = order_count * 6;
    else if(choice == 2 ) total = order_count * 7;
    else total = order_count * 10;

    cout << "Total Pay = " << total;
    return 0;
}
