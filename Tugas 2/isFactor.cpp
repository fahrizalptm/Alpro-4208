#include <iostream>

using namespace std;

bool isFactor(int a, int b){
    if (b % a == 0 ) {
        return true;
    }else {
        return false;
    }
}

int main(){
    int a, b;
    cout << "masukan a : ";
    cin >> a;
    cout << "masukan b : ";
    cin >> b;

    if (isFactor(a, b)) {
        cout << a << " ini factor dari " << b << "." << endl;
    }else{
        cout << a << " ini bukan factor dari " << b << "." << endl;
    }
    return 0;
}