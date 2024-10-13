#include <iostream>
using namespace std;

void calculator(int a, int b,  char op, int **result){
    switch(op){
        case '+': **result = a + b; break;
        case '-': **result = a - b; break;
        case '*': **result = a * b; break;
        case '/': **result = a / b; break;
        case '%': **result = a % b; break;
        default: cout << "Invalid!";
    }
}
int main(){
    int a, b;
    char op;
    int *result = new int;
    int **pointerRe = &result;
    cout << "Enter the value of A: "; cin >> a;
    cout << "Enter the value of B: "; cin >> b;
    cout << "Enter the operator: "; cin >> op;
    calculator(a, b, op, pointerRe);

    cout << a << " " << op << " " << b << " = " << **pointerRe;
}
