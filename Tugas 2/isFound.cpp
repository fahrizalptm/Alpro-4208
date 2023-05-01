#include <iostream>

using namespace std;

bool isFound(int array[], int a, int b) {
    for (int i = 0; i < a; i++) {
        if (array[i] == b){
            return true;
        }
    }
    return false;
}

int main() {
    int array[] = {2, 4, 6, 8, 10};
    int a = sizeof(array) / sizeof(array[0]);
    int b = 4;
    cout << isFound(array, a, b) ? "ada" : "tidak ada)";
    return 0;
}