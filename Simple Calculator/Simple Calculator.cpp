#include <iostream> 
#include <cmath>
using namespace std;

int main() {
    char op;
    float num1, num2, res;
    cout << "Enter an operator (+,-,*, or /)" << endl;
    cin >> op;
    cout << "Now enter both your number and press 'enter' after each one." << endl;
    cin >> num1 >> num2;

    switch (op) {
    case '+':
        res = num1 + num2;
        break;
    case '-':
        res = num1 - num2;
        break;
    case '*':
        res = num1 * num2;
        break;
    case '/':
        res = num1 / num2;
        break;
    }
    cout << "The answer is: " << res << endl;

    char decide;
    cout << "Would you like to make any other calculations with this answer? (Y or N)" << endl;
    cin >> decide;

    if ((decide == 'Y') || (decide == 'y')) {
        char op2;
        float num3, res2;
        cout << "Enter the next operator: " << endl;
        cin >> op2;
        cout << "Now enter the next number: " << endl;
        cin >> num3;

        switch (op2) {
        case '+':
            res2 = res + num3;
            break;
        case '-':
            res2 = res - num3;
            break;
        case '*':
            res2 = res * num3;
            break;
        case '/':
            res2 = res / num3;
            break;

        }
        
        cout << "The answer is " << res2 << endl;
    }
    else {
        cout << "Goodbye!" << endl;
    }

    return 0;
}
