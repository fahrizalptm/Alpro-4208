#include <iostream>

using namespace std;

bool isEven(int b){
    if (b % 2 == 0){
        return true;
    }else{
        return false;
    }
}

int main() {
    int c;
    cout << "Masukan angka: ";
    cin >> c;

    if (isEven(c)) {
        cout << c << " bilangan genap " << endl;
    }else{
        cout << c << " bilangan ganjil " << endl;
    }

    return 0;
}