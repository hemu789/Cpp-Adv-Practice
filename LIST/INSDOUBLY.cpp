
#include<iostream>
using namespace std;

class Node{

    public:

    int data;
    Node* next;
    Node* prev;

    Node(int data){
        this->data=data;
        prev=NULL;
        next=NULL;
    }

};

Node* insert(Node * head, int data){

    Node* temp = new Node(data);

    if(head!=NULL){
        head->prev=temp;
    }

    return temp;
}

int main(){

    Node *n1 = new Node(10);
    Node *head= n1;

    insert(head,20);




    return 0;
}