#include<iostream>
using namespace std;
struct Element
{
    char data;
    Element *next;
};
struct Queue
{
    int s; //size of queue
    Element *rear_;
    Element *front_;
};

Queue *createEmptyQueue()  //we want to return the type as the return queue
{

    Queue *q1;
    q1 = new Queue;
    q1->s = 0;
    q1->rear_= q1->front_ = NULL;

    return q1;
}
/* Defining FIFO method
   Insert the end       ENQUEUE
   Delete from begin    DEQUEUE
 */
void enqueue(Queue *q1, char newData)
{
    //create a new Element
    Element *t;
    t = new Element;
    t->data = newData;
    t->next = NULL;
    //Make connection
    if(q1->s == 0)
    {
        q1->rear_= t;
        q1->front_= t;
        q1->s++;    //q1-> = q1->s+1;
    }
    else
    {
        q1->rear_->next = t;
        q1->rear_ = t;
        q1-> s++;
    }
}
void dequeue(Queue * q1)
{
    if(q1->s == 0)
    {
        cout<<"\n\tCan not delete. Queue is empty!\n";
    }
    else if(q1->s==1)
    {
        Element *t;
        t = q1->front_;

        q1->front_ = NULL;
        q1->rear_ = NULL;
        q1->s--; //q1->s = q1-> s - 1;
        delete t;
    }
    else if(q1->s >= 2)
    {
        Element *t;
        t= q1->front_;

        q1->front_ = q1->front_->next;
        delete t;
        q1->s--; //q1->s = q1->s -1;
    }
}
void displayQueue(Queue *q1)
{
    Element *p;
    p = q1->front_;

    while(p!=NULL)
    {
        cout<<p->data<<"  ";
        p = p->next;
    }
    cout<<endl;
}
