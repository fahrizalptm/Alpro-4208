#include <iostream>

using namespace std;

int sumEven(int array[], int a){
    int sum = 0;
    for (int i = 0; i < a; i++){
        if (array[i] % 2 == 0){
            sum += array[i];
        }
    }
    return sum;
}

int main(){
    int array[] = {1, 3, 5, 7, 9, 10, 11, 12, 15, 20};
    int a = sizeof(array) / sizeof(array[0]);
    int sum = sumEven(array, a);
    cout << " Jumlah bilangan genap dalam array : " << sum << endl;
    return 0 ;
}