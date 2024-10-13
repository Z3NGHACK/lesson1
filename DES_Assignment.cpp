#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int p = 23, q = 31, n = 29, s = 569, a = 572;
    int z = p * q;
    int O = (p - 1) * (q - 1);
    int x = (n * s) % O;
    int c = pow(a, n);
    int modOfC = c % z;
    int y = pow(modOfC, s) ;
    int receiver = y % z;
    cout << z << " " << O << " " << x << " " << modOfC << " " << receiver;
    return 0;
}
