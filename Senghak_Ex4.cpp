#include <iostream>
#include "hak_single_linklist.h"
using namespace std;
int main(){
    List*myList = createEmptyList();
    cout << "The first array: ";
    addToBeginning(myList, 85);
    addToBeginning(myList, 21);
    addToBeginning(myList, 57);
    displayList(myList);
    cout << endl;
    cout << "The second array: ";
    addToEnd(myList, 23);
    addToEnd(myList, 67);
    addToEnd(myList, 49);
    displayList(myList);
    cout << endl;
    cout << "The third array: ";
    addTospecificLine(myList, 71, 3);
    addTospecificLine(myList, 59, 5);
    displayList(myList);
    cout << endl;
    createLinkedList(4, 5);
    return 0;
}
