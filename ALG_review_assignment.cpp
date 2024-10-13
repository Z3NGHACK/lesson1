#include<iostream>
#include<math.h>

using namespace std;

float computeSurface(int a, int b, int c){
    float s = (float)(a + b + c) / 2;
    float A = pow((s * (s - a)*(s - b)*(s - c)), 1.0/2.0);
    return A;
}
int main(){
    int a = 2, b = 2, c = 3;
    cout << "The value of Heron's formula is: " << computeSurface(a, b, c);
    return 0;
}
