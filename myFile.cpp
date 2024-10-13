#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int p = 23, q = 31, n = 29, s = 569, phi = (p - 1)*(q - 1), z = 713;
    int nsmp = ((n * s) % phi), a = 572;
    long long c = (pow(a, n));

    cout << "\nZ: " << p * q;
    cout << "\nPHI: " << phi;
    cout << "\nNS mod PHI: " << nsmp;
    cout << "\nC: " << c;
}
