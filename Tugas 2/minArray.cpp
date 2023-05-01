#include <iostream>

using namespace std;

int maxArray(int array[], int a){
    int min = array[0];
    for (int i = 1; i < a; i++){
        if (array[i] < min) {
            min = array[i];
        }
    }
    return min;
}

int main() {
    int array[] = {2, 4, 7, 9, 13};
    int a = sizeof(array) / sizeof(array[0]);
    int min = maxArray(array, a);
    cout << " Nilai manimum dalam array adalah : " << min << endl;
    return 0;
}