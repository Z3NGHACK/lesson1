#include <iostream>
using namespace std;
int main(){
    int a = 273, b = 110, r = 1;
    if(a > b){
        swap(a, b);
    }
    if(b == 0)
        cout << a;
    r = a % b;
    cout << r;
}
