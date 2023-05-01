#include <iostream>

using namespace std;

void swapN (int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 10;
    int y = 20;
    cout << "sebelup swap: x = " << x << ", y = " << y << endl;
    swapN(&x, &y);
    cout << "sesudah swap: x = " << x << ", y = " << y << endl;
    return 0 ;
}