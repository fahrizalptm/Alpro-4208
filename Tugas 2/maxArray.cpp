#include <iostream>

using namespace std;

int maxArray(int array[], int a){
    int max = array[0];
    for (int i = 1; i < a; i++){
        if (array[i] > max) {
            max = array[i];
        }
    }
    return max;
}

int main() {
    int array[] = {2, 4, 7, 9, 13};
    int a = sizeof(array) / sizeof(array[0]);
    int max = maxArray(array, a);
    cout << " Nilai maksimum dalam array adalah : " << max << endl;
    return 0;
}