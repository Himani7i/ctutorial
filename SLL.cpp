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

    void insertatHead(Node* &head, int d){
        Node* temp = new Node(d);
        temp->next= head;
        head = temp;
    }

    void insertatTail(Node* &tail, int d) {
     // new node create
    Node* temp = new Node(d);
    tail -> next = temp;
    tail  = temp;
    }

    void insertatposition(Node* &tail, Node* &head, int d, int position){
        //at head
        if(position == 1){
            insertatHead(head, d);
      
        return ;

        }
        //traversing upto a position
        Node* temp = head;
        int cnt=1;

        while(cnt < position-1) {
        temp = temp->next;  
        cnt++;
        }

        //at tail
        if(temp->next == NULL){
            insertatTail(tail, d);
            return ;
        }
        //inserting nodetoinsert
        Node* nodetoinsert = new Node(d);
        nodetoinsert->next =temp->next;
        temp->next= nodetoinsert;
    }

    oid deletenode(int position,Node* &head){
   if(position == 1){
        Node* temp = head;
        head = head -> next;
        //memory free start node
        temp -> next = NULL;
        delete temp;
   }
   else{
        Node* curr = head;
        Node* prev = NULL;
        int cnt = 1;
         while(cnt < position) {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }
        prev -> next = curr -> next;
        curr -> next  = NULL;
        delete curr;
   } 
   }