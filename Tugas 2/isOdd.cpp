#include <iostream>

using namespace std;

bool isOdd(int a){
    return a % 2 == 1;
}

int main(){
    int a;
    cout << "bilangan : ";
    cin >> a;
    cout << "bilangan " << a << " merupakan bilangan " << (isOdd(a) ? "ganjil" : "genap") << endl;
    
    return 0;
}