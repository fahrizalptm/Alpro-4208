#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; // Return the index where the target element is found
        }
    }
    return -1; // Return -1 if the target element is not found
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 22;

    int result = linearSearch(arr, size, target);

    if (result == -1) {
        cout << "Element not found." << endl;
    } else {
        cout << "Element found at index " << result << "." << endl;
    }

    return 0;
}