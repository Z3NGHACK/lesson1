#include<iostream>
using namespace std;

struct element{
    int data;
    element *next;
};
struct List{
    element*head;
    element*tail;
    int length;
};
List*createAnEmptyList(){
    return new List{NULL, NULL, 0};
}
void addToBeginning(List*ls, int data)
{
    if(ls -> length == 0){
        ls->head=ls->tail=new element{data, NULL};
    }else{
        element*a=new element{data, ls->head};
        ls->head=a;
    }
    ls->length++;
}
void addToEnd(List*ls, int data){
    if(ls -> length == 0){
        ls->head=ls->tail=new element{data, NULL};
    }else{
        element*a=new element{data, NULL};
        ls->tail->next = a;
        ls->tail=a;
    }
    ls->length++;
}
void addSpecificLine(List*ls, int data, int position){
    if(position<=0){
        addToBeginning(ls,data);
    }else if(position>=ls->length){
        addToEnd(ls,data);
    }else{
        element*b=ls->head;
        for(int i=1; i<position; i++){
            b=b->next;
        }
        element*a=new element{data, b->next};
        b->next=a;
    }
    ls->length++;
}
void sumAndAverage(List*ls){
    int sum=0;
    element*a=ls->head;
    while(a!=NULL){
        sum +=a->data;
        a=a->next;
    }
    int n;
    int avg=sum/n;
    cout << "Sum: " << sum;
    cout << "\nAverage: " << avg;
}
void displayList(List*ls){
    for(element*a=ls->head; a!=NULL; a=a->next){
        cout << a->data<<", ";
    }
    cout << endl;
}
