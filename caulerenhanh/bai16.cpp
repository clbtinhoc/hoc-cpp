#include <iostream>
using namespace std;

int main (){
    int a;
    cout << "Nhập a: ";
    cin >> a;
    if (a <= 100 && a >= 10) {
        cout << a << " trong dãy từ 10 tới 100";
    } else {
        cout << a << " không nằm trong dãy từ 10 tới 100";
    }
}