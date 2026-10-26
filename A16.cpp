#include <iostream>
using namespace std;

int main(){
    
    int a,b;
    cout << "Before swapping a = " << a << " , b = " << b << endl;

    int temp;
    
    temp = a;
    a = b;
    b = temp;
    cout << "After swapping a = " << a << " , b = " << b << endl;
    return 0;
}
