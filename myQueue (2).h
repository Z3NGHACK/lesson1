#include<iostream>
using namespace std;

struct Element{
    int data;
    Element *next;
};

struct Queue{
    int s;
    Element *rear_;
    Element *front_;
};
Queue *createEmptyQueue(){
    Queue *q1;
    q1= new Queue;
    q1->s=0;
    q1->rear_= NULL;
    q1->front_= NULL;

    return q1;
}
void enqueue( Queue *q1, int newData){
    Element *t;
    t=new Element;
    t->data=newData;
    t->next=NULL;
    if(q1->s==0){
        q1->rear_=t;
        q1->front_=t;
        q1->s++;

    }else{
        q1->rear_->next=t;
        q1->rear_=t;
        q1->s++;
    }
}
void dequeue(Queue *q1){
    if(q1->s==0)
    {
        cout<<"/n/tCannot delete. Queue is empty./n";
    }else if (q1->s==1){
        Element *t;
        t=q1->front_;

        q1->front_= NULL;
        q1->rear_= NULL;
        q1->s--;
        delete t;
    }else if (q1->s>=2){
        Element *t;
        t=q1->front_;

        q1->front_= q1->front_->next;
        delete t;
        q1->s--;
    }
}
void displayQueue(Queue *q1){
    Element *p;
    p=q1->front_;

    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
}


