#include <iostream>
using namespace std;

int main (){
    int n;
    cout << "Nhap n: ";
    cin >> n;
    if (n > 25) {
        cout << "n > 25";
    } else if (n < 25) {
        cout << "n < 25";
    } else {
        cout << "n = 25";
    }
}