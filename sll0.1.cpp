#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next= NULL;
    }

    ~Node(){
        int value = this->data;
    if(this->next !=NULL){
        delete next;
        this->next=NULL;
          }
          cout << " memory is free for node with data " << value << endl;
    }
    };

    void deleteNode(Node* &head, int x) {
    // If the list is empty
    if (head == nullptr) {
        cout << "List is empty, cannot delete " << x << endl;
        return;
    }

    // If the node to be deleted is the first node
    if (head->data == x) {
        Node* temp = head;
        head = head->next;
        delete temp;
        cout << "Node with data " << x << " deleted from the beginning" << endl;
        return;
    }

    // Traverse the list to find the node with data x
    Node* prev = nullptr;
    Node* curr = head;
    while (curr != nullptr && curr->data != x) {
        prev = curr;
        curr = curr->next;
    }

    // If node with data x is not found
    if (curr == nullptr) {
        cout << "Node with data " << x << " not found in the list." << endl;
        return;
    }

    // Remove the node from the list and free its memory
    prev->next = curr->next;
    delete curr;
    cout << "Node with data " << x << " deleted" << endl;
}

void print(Node* &head){

        if(head == NULL){
        cout << "List is empty "<< endl;
        return ;
        }
    
       Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"  ";
        temp = temp -> next;
    }
    cout<<endl;
}

