#include <iostream>
using namespace std;

void swaps(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleShort(int a[], int n){
    bool state;
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - 1; j++){
            if(a[j] > a[j + 1]){
                swaps(&a[j], &a[j + 1]);
                state = true;
            }
        }
        if(state = false){
            break;
        }
    }
}

void display(int a[], int n){
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
}
int main(){
    int a[] = {40, 10, -30, 45, 39, 32};
    int num = sizeof(a) / sizeof(a[0]);

    bubbleShort(a, num);
    display(a, num);
}
