#include <iostream>
using namespace std;

int main (){
    int n;
    cout << "Nhap n: ";
    cin >> n;
    if (n % 3 == 0) {
        cout << "n chia het cho 3";
    } else {
        cout << "n khong chia het cho 3";
    }
}