#include <iostream>

using namespace std;

int penjumlahan(int j, int i){
    if (i == 0) {
        return j;
    } else {
        return penjumlahan(j + 1, i - 1);
    }
}

int main() {
    int bilangan1 = 5;
    int bilangan2 = 45;
    int hasil = penjumlahan(bilangan1, bilangan2);
    cout << "Hasil penjumlahan rekursif dari " << bilangan1 << " + " << bilangan2 << " = " << hasil << endl;
    return 0;
}