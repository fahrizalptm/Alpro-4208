#include <iostream>

using namespace std;

int sumOdd(int array[], int b){
    int sum = 0;
    for (int i = 0; i < b; i++) {
        if (array[i] % 2 != 0) {
            sum += array[i];
        }
    }
    return sum;
}

int main(){
    int array[] = {1, 3, 5, 7, 9, 10, 11, 12, 15, 20};
    int b = sizeof(array) / sizeof(array[0]);
    int sum = sumOdd(array, b);
    cout << "Jumlah bilangan ganjil dalam array : " << sum << endl;
    return 0 ;
}