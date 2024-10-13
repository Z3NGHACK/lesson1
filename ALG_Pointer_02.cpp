#include <iostream>
using namespace std;

int main(){
    int value1 = 78;
    int value2 = 64;
    cout << "Value before swap.";
    cout << "\nValue1: " << value1;
    cout << "\nValue2: " << value2;
    cout << "\n\nValue after swap.";
    int *ptr1 = &value1;
    int *ptr2 = &value2;
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
    cout << "\nValue1: " << value1;
    cout << "\nValue2: " << value2;
    return 0;
}
