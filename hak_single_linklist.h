#include <iostream>
using namespace std;

struct element{
    int data;
    element *next = nullptr;
};
struct List{
    element *head;
    element *tail;
    int length;
};
List *createEmptyList(){
    return new List{nullptr, nullptr, 0};
}

element* createLinkedList(int arr[], int n)
{
   List *myList = NULL;
   for (int i = 0; i < n; i++)
   {
      addToBeginOfList(&myList, arr[i]);
   }
   return myList;
}

void addToBeginning(List *myList, int data){

    if(myList->length == 0){
        myList -> tail = myList -> head = new element{data, nullptr};
    }else{
        element *a = new element{data, myList->head};
        myList -> head = a;
    }
    myList->length++;
}

void addToEnd(List *myList, int data){

    if(myList->length == 0){
        myList -> tail = myList -> head = new element{data, nullptr};
    }else{
        element *a = new element{data, nullptr};
        myList->tail->next = a;
        myList->tail = a;
    }
    myList->length++;
}

void addTospecificLine(List*myList, int data, int position){
    if(position <= 0){
        addToBeginning(myList, data);
    }else if(position>=myList->length){
        addToEnd(myList, data);
    }else{
        element *b = myList -> head;
        for(int i = 1; i < position; i++){
            b=b->next;
        }
        element*a = new element{data, b->next};
        b->next = a;
        myList->length++;
    }
}

void displayList(List*myList){
    for(element *a = myList->head; a!=nullptr; a=a->next){
        cout << a->data<<", ";
    }
    cout << endl;
}
