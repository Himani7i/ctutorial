#include <iostream>
using namespace std;

int main(){
char operation;
cout << "Enter an operator (+, -, *, /): ";
cin >> operation;

double a,b;
cout<<"enter the number:\n"<<"a:\n"<<endl;
cin>>a;
cout<<"enter the number:\n"<<"b:\n"<<endl;
cin>>b;
switch (operation) {
        case '+':
            cout << "Result: " << a + b << endl;
            break;
        case '-':
            cout << "Result: " << a - b << endl;
            break;
        case '*':
            cout << "Result: " << a * b << endl;
            break;
        case '/':
            if (b != 0) {
                cout << "Result: " <<  a/ b << endl;
            } else {
                cout << "Error: Division by zero!" << endl;
            }
            break;
        default:
            cout << "Invalid operator" << endl;
            break;
    }

    return 0;
}