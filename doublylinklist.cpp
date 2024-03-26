#include<iostream>

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

Node* reverseDoublyLinkedList(Node* head) {
    Node* prev = nullptr;
    Node* current = head;
    Node* next = nullptr;

    while (current != nullptr) {
        next = current->next;
        current->next = prev;
        current->prev = next;
        prev = current;
        current = next;
    }

    // Prev is pointing to the last node (now first node) of the original list
    // So, it becomes the new head of the reversed list
    return prev;
}


void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

//gives length of ll
int getlength(Node* &head){
    Node* temp = head;
    int length=0;
    while(temp != NULL){
        length++;
        temp = temp->next;
    }
    return length;
}

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

void printSecondLast(Node* head) {
    if (head == nullptr || head->next == nullptr) {
        cout << "List is empty or has only one node, no second last node." << endl;
        return;
    }

    Node* temp = head;
    while (temp->next->next != nullptr) {
        temp = temp->next;
    }

    cout << "Second last element: " << temp->data << endl;
}

Node* findMiddle(Node* head) {
    if (head == nullptr)
        return nullptr;

    Node* slow = head;
    Node* fast = head;

    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}

void insertBefore(Node* &head, int x, int y) {
    if (head == nullptr) {
        cout << "List is empty, cannot insert before " << y << endl;
        return;
    }

    Node* temp = head;
    while (temp != nullptr && temp->data != y) {
        temp = temp->next;
    }

    if (temp == nullptr) {
        cout << "Node with data " << y << " not found in the list." << endl;
        return;
    }

    Node* newNode = new Node(x);
    newNode->next = temp;
    newNode->prev = temp->prev;

    if (temp->prev != nullptr) {
        temp->prev->next = newNode;
    } else {
        // If temp is the head node
        head = newNode;
    }
    temp->prev = newNode;

    cout << "Node with data " << x << " inserted before " << y << endl;
}
void deleteNode(Node* &head, int x) {
    if (head == nullptr) {
        cout << "List is empty, cannot delete " << x << endl;
        return;
    }

    Node* temp = head;
    while (temp != nullptr && temp->data != x) {
        temp = temp->next;
    }

    if (temp == nullptr) {
        cout << "Node with data " << x << " not found in the list." << endl;
        return;
    }

    if (temp->prev != nullptr) {
        temp->prev->next = temp->next;
    } else {
        // If temp is the head node
        head = temp->next;
    }

    if (temp->next != nullptr) {
        temp->next->prev = temp->prev;
    }

    delete temp;
    cout << "Node with data " << x << " deleted" << endl;
}




int main(){
    //this was is there was already a node present!
    // Node* node1= new Node(10);
    // Node* head = node1;
    //  print(head);
//     cout<<node1->data<<endl;
//     cout<<node1->next<<endl;


//no node present pehle se
    Node* head = NULL;
    Node* tail = NULL;
    print(head);

    insertathead(tail,head, 11);
    print(head);
    cout << "head  " << head -> data << endl;
    cout << "tail  " << tail -> data << endl;

    insertathead(tail,head, 13);
    print(head);
    cout << "head  " << head -> data << endl;
    cout << "tail  " << tail -> data << endl;

    insertathead(tail,head, 8);
    print(head);
    cout << "head  " << head -> data << endl;
    cout << "tail  " << tail -> data << endl;

    insertattail(tail,head,25);
    print(head);
    cout << "head  " << head -> data << endl;
    cout << "tail  " << tail -> data << endl;

     insertattail(tail,head,20);
    print(head);
    cout << "head  " << head -> data << endl;
    cout << "tail  " << tail -> data << endl;

     insertattail(tail,head,30);
    print(head);
    cout << "head  " << head -> data << endl;
    cout << "tail  " << tail -> data << endl;

     insertattail(tail,head,25);
    print(head);
    cout << "head  " << head -> data << endl;
    cout << "tail  " << tail -> data << endl;

    insertatposition(tail,head, 2, 69);
    print(head);
    cout << "head  " << head -> data << endl;
    cout << "tail  " << tail -> data << endl;

    // Reverse the list
    Node* newHead = reverseDoublyLinkedList(head);
    print(newHead);

//     deleteNode( tail,head,1);


//  // Print the list for 2nd last element
 
//     cout << "Doubly linked list: ";
//     for (Node* temp = head; temp != nullptr; temp = temp->next) {
//         cout << temp->data << " ";
//     }
//     cout << endl;
//     printSecondLast(head);

//     // Find and print the middle node
//     Node* middleNode = findMiddle(head);
//     if (middleNode != nullptr) {
//         cout << "Middle node: " << middleNode->data << endl;
//     } else {
//         cout << "List is empty." << endl;
//     }

   

   


    return 0;
}