#include <iostream>
using namespace std;

struct Node{
    int data;
    Node *right;
    Node *left;
};

Node *add(Node *root, int newData){
    if(root == NULL){
        root = new Node();
        root -> data = newData;
        root -> left = NULL;
        root -> right = NULL;

    }else if(root -> data >= newData){
        root -> left = add(root -> left, newData);
    }else if(root -> data <= newData){
        root -> right = add(root -> right, newData);
    }
    return root;
}

void displayInorder(Node *r){
    if(r != NULL){
        displayInorder(r -> left);
        cout << r -> data << " ";
        displayInorder(r -> right);
    }
}

int main(){
    Node *mytree = NULL;

    mytree = add(mytree, 5);
    mytree = add(mytree, 2);
    mytree = add(mytree, 18);
    mytree = add(mytree, -4);
    mytree = add(mytree, 3);
    mytree = add(mytree, 4);
    mytree = add(mytree, 10);
    mytree = add(mytree, 4);

    displayInorder(mytree);

    return 0;
}
