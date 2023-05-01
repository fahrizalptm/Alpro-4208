#include <iostream>

using namespace std;

int maxN (int array[], int a){
    int temp = array[0];
    for (int i = 1; i < a; i++){
        if (array[i] > temp) temp = array[i];
    } 
    return temp;
}

int main(){
    int a;
    cout << "banyak elemen : ";
    cin >> a;
    int array[a];
    for (int i = 0; i < a; i++){
        cout << "elemen ke " << i << ": ";
        cin >> array[i];
    }
    cout << "elemen terbesar " << maxN(array, a) << endl;
    return 0;
}