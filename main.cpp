#include <iostream>

using namespace std;

int main() {
    // algorithm: simple calculator with 'switch/case'
    float A, B, x;
    char op; // declaration of an operator
    while (A!=0) {
        cout << "input expression: e.g. 2 + 2: ";
        cin >> A >> op >> B;
        switch (op) {
            case '+':
                x=A+B;
                cout << x;
                break;
            case '-':
                x=A-B;
                cout << x;
                break;
            case '*':
                x=A*B;
                cout << x;
                break;
            case '/':
                if (B != 0) { // test of the null devisor
                    x=A/B;
                    cout << x;
                } else {
                    cout << "Devision by zerp!";
                }
                break;
            default:
                cout << "Wrong operator!";
        }
        cout << endl;
    }

}