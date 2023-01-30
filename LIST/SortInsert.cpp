
#include <iostream>
using namespace std;

class Node
{

public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

//Sort Insert 

Node * insertSort(Node *head,int x){

    Node* temp = new Node(x);

    if(head==NULL){
        return temp;
    }

    if(x < head->data){

        temp->next = head;
        return temp;
    }
    Node* curr =head;
    while(curr->next!=NULL && curr ->data <x){
        curr=curr->next;
    }

    temp->next=curr->next;
    curr->next=temp;

}
void Print(Node *head)
{

    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main()
{

    Node *n1 = new Node(10);
    Node *head = n1;




    head = insertSort(head, 20);

    Print(head);

    return 0;
}