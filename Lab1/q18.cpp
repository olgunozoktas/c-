#include <iostream>

using namespace std;

int main()
{
    int operand1;
    char operators;
    int operand2;

    cout << "Enter operand1: ";
    cin >> operand1;

    cout << "Enter operator: ";
    cin >> operators;

    cout << "Enter operand2: ";
    cin >> operand2;

    float result;

    if(operators == '+'){
        result = operand1 + operand2;
    }else if(operators == '-'){
        result = operand1 - operand2;
    }else if(operators == '*'){
        result = operand1 * operand2;
    }else if(operators == '/'){
        result = operand1 / operand2;
    }else if(operators == '%'){
        result = operand1 % operand2;
    }

    cout << "Result of " << operand1 << operators << operand2 << " is " << result; 
    return 0;
}
