#include <iostream>
using namespace std;

int main (){
    int a,b;
    char c;
    cout << "Nhập a: ";
    cin >> a;
    cout << "Nhập b: ";
    cin >> b;
    cout << "Nhập c: ";
    cin >> c;
    switch (c) {
        case '+':
            cout << a << " + " << b << " = " <<  a + b;
            break;
        case '-':
            cout << a << " - " << b << " = " << a - b;
            break;
        case '*':
            cout << a << " * " << b << " = " << a * b;
            break;
        case '/':
            cout << a << " / " << b << " = " << a / b;
            break;
        default:
            cout << "c không hợp lệ!";
            break;
    }
}