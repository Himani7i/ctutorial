#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int d){
        this->data = d;
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

    void insertNode(Node* &tail, int element, int d){
        if(tail == NULL){
            Node* newNode = new Node(d);
            tail = newNode;
            newNode->next=newNode;
        }
        else{
            Node* curr = tail;
            while(curr->data!=element){
                curr=curr->next;
            }
        }
        Node* temp = new Node(d);
        temp -> next = curr -> next;
        curr -> next = temp;
    }
    
    void deleteNode(Node* &tail, int value){
         //empty list
        if(tail == NULL) {
        cout << " List is empty, please check again" << endl;
        return;
        }
        else{
            //non-empty

        //assuming that "value" is present in the Linked List
        Node* prev = tail;
        Node* curr = prev -> next

        while(curr->data!= value){
            prev = curr;
            curr = curr -> next;
        }
           prev -> next = curr -> next;

        //1 Node Linked List
        if(curr == prev) {
            tail = NULL;
        }

        //>=2 Node linked list
        else if(tail == curr ) {
            tail = prev;
        }
        curr -> next = NULL;
        delete curr;

        }
    }