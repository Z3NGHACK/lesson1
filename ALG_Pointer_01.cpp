#include <iostream>
using namespace std;
int main(){
    int intValue = 86;
    float floatValue = 212.21;
    string stringValue = "Hello World!";

    cout << "Int Value: " << intValue << " Address int value: " << &intValue;
    cout << "\nFloat Value: " << floatValue << " Address float value: " << &floatValue;
    cout << "\nString Value: " << stringValue << " Address string value: " << &stringValue;
    return 0;
}
