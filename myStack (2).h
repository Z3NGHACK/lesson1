#include<iostream>
using namespace std;

struct Element
{
    char name;
    Element * next;
};

struct Stack
{
    int length;
    Element * top;

};

Stack * InitalizeEmptystack ()
{
    Stack * h = new Stack{0, NULL};
    return h;
}

void push(Stack * h, char data)
{
    Element * k = new Element{data, NULL};

    if (h->length == 0) h->top = k;

    else
    {
        k->next = h->top;
        h->top = k;

    }
    h->length++;

}

void pop(Stack *mystack)
{
    if (mystack->length == 0) cout<<"\n\t Can not delete from empty stack.Stack underflow ";

    else if (mystack->length>1)
    {
        Element *t;
        t=mystack->top;

        mystack->top=mystack->top->next;

        delete t;
        mystack->length --;

    }
}

void displayStack(Stack * h)
{
    Element * t = new Element;
    t = h->top;

    while (t != NULL)
    {
        cout << t->name << endl;
        t = t->next;
    }

}

