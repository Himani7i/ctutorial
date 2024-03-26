#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;


    Node(int d){
        this->data =d;
        this->prev = NULL;
        this->next = NULL;

    }

    ~Node(){
        int value = this->data;
        if(next!= NULL){
            delete next;
            next = NULL;
        }
        cout<<" memory free for :"<<value<<endl;
    }
};

void insertathead(Node* &tail, Node* &head, int d){
    if(head == NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else{
        Node* temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void insertattail(Node* &tail, Node* &head,int d){
    if(tail == NULL){
        Node* temp = new Node(d);
        tail = temp;
        head = temp;
    }
    else{
         Node* temp = new Node(d);
         tail->next= temp;
         temp->prev=tail;
         tail = temp;

    }
}

void insertatposition(Node* &tail, Node* &head,int pos,int d){
//insert at start
if(pos==1){
insertathead(tail,head,d);
return;
}
Node* temp = head;
int cnt=1;
while(cnt<pos-1){
    temp=temp->next;
    cnt++;
}
//inserting at last
if(temp->next == NULL){
    insertattail(tail,head,d);
    return;
}



Node* nodetoinsert= new Node(d);
nodetoinsert->next=temp->next;
temp->next->prev = nodetoinsert;
temp -> next = nodetoinsert;
nodetoinsert->prev=temp;

}

void deleteNode (Node* &tail, Node* &head,int pos){
if(pos==1){
Node* temp = head;
temp->next->prev=NULL;
head = temp->next;
temp->next= NULL;
delete temp;
}
else{
    Node* curr = head;
    Node* prev = NULL;
        int cnt = 1;
         while(cnt < pos) {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }
        curr->prev = NULL;
        prev->next = curr->next;
        curr->next= NULL;
        delete curr;
}
}