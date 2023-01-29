
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

Node* insertAtHead(Node * head, int data){

    Node* temp = new Node(data);
    temp->next = head;

    if(head!=NULL){
        head->prev=temp;
    }

    return temp;
}

void Print(Node * head){

    Node * temp =head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main(){

    Node *n1 = new Node(10);
    Node *head= n1;

   head = insertAtHead(head,20);

    Print(head);




    return 0;
}