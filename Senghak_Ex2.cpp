#include <iostream>
using namespace std;

void fibonacci(int N, int prev1 = 1, int prev2 = 0){
    if(N <= 0)
        return;

    int current = prev1 + prev2;
    cout << current << " ";

    fibonacci(N-1, current, prev1);
}

int main(){
    int N;
    cout << "Enter the range of N: "; cin >> N;
    cout << "0 ";
    if(N > 1 ){
        cout << "1 ";
        fibonacci(N - 2);
    }
    return 0;
}
