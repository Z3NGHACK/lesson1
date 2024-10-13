#include<iostream>
#include<math.h>
using namespace std;
int main(){
float x, n;
cout << "Enter the value of x: ";
cin >> x;
cout << "Enter the root of x: ";
cin >> n;

float x1 = pow(x, 1 / n);
cout << "\n\nThe value of x is: " << x1;
}
