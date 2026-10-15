#include <iostream>
using namespace std;

int main() {
    // algorithm: simple calculator with 'switch/case'
    float A, B, x;
    char op; // declaration of an operator
    while (true) {
        cout << "input expression: e.g. 2 + 2: ";
        cin >> A >> op >> B;

        if (A==0 && B==0) {
            cout << "end me pls"; //Take It with a sprinkle of salt
            break;
        }

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
                    cout << "Devision by zero!";
                }
                break;
            default:
                cout << "Wrong operator!";
        }
        cout << endl;
    }

}