#include <iostream>
using namespace std;

int search(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int search(int arr[], int size, int key, bool reverse) {
    if (reverse) {
        for (int i = size - 1; i >= 0; i--) {
            if (arr[i] == key) {
                return i;
            }
        }
    } else {
        for (int i = 0; i < size; i++) {
            if (arr[i] == key) {
                return i;
            }
        }
    }
    return -1;
}

int main() {
    const int SIZE = 5;
    int arr[SIZE];

    cout << "Enter " << SIZE << " elements:" <<endl;
    for (int i = 0; i < SIZE; i++) {
        cout << i+1 << ": ";
        cin >> arr[i];
    }

    int key;
    cout << "Enter the element to search: ";
    cin >> key;

    int index = search(arr, SIZE, key);
    if (index != -1) {
        cout << "Element found at index: " << index+1 <<endl;
    } else {
        cout << "Element not found!" <<endl;
    }

    bool reverse;
    cout << "Enter '1' to search in reverse, or '0' for normal search: ";
    cin >> reverse;

    index = search(arr, SIZE, key, reverse);
    if (index != -1) {
        cout << "Element found at index: " << index+1 << endl;
    } else {
        cout << "Element not found!" <<endl;
    }

    return 0;
}
