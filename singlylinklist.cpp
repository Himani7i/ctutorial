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

Node* reverseLinkedList(Node* &head){
    //Your reverseLinkedList function returns the new head of the reversed list,
    // but you're not updating the head of the list to the reversed head in your main function. 
    //You need to update the head pointer with the return value of reverseLinkedList(head).
    if (head == NULL || head->next==NULL){
        cout<<"list is empty"<<endl;
    return head;
    
    }
    else{
        Node*prev =NULL;
        Node*curr = head;
        Node*forward=NULL;
        while(curr!=NULL){
            forward=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward; 
        }
        return prev;

    }

}

//OR
//REVERSING USING RECCURSION

 

void reverse(Node* &head, Node* curr, Node* prev){
    //base case
    if(curr == NULL){
        head = prev;
        return;
    }
   // Recursively reverse the rest of the list
    Node* forward = curr->next;
    reverse(head,forward,curr);
    // Update the next pointer to reverse the list
    curr->next = prev;
}
    
 Node* reverselinklist(Node* head){
        Node* curr = head;
        Node* prev = NULL;
        reverse(head,curr,prev);
        // Find the new head after reversing
    while (curr && curr->next) {
        curr = curr->next;
    }
    
    return curr;
        
    }

///////ORRRRRRRRRRRR
Node* getMiddle(Node* head){
    if(head ==NULL || head->next == NULL){
        return head;
    }
    //2NODES
    if(head->next->next==NULL){
        return head->next;
    }
    Node* slow = head;
    Node* fast = head->next;
    while(fast!= NULL){
        fast = fast->next;
        if(fast!= NULL){
            fast = fast->next;
        }
        slow = slow->next;
    }
    return slow;
}


void deletenode(int position,Node* &head){
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

//ORRRRRR APPROACH 3 OF CHHOTAHEAD
// Recursive function to reverse the linked list
Node* reverse1(Node* head) {
    // Base case: empty list or list with single node
    if (head == NULL || head->next == NULL) {
        return head;
    }

    // Recursively reverse the rest of the list
    Node* chhotahead = reverse1(head->next);

    // Update pointers to reverse the list
    head->next->next = head;
    head->next = NULL;

    // Return the new head of the reversed list
    return chhotahead;
}

//length
int getLength(Node* &head){
    int len = 0;
    while( head !=NULL){
        len++;
        head=head->next;
    }
    return len;
   }


//midddleeeeeeee
   Node*findMiddle(Node* &head){
    int len = getLength(head);
    int ans = (len/2);

    Node* temp = head;
    int cnt = 0;
    while(cnt<ans){
        temp = temp -> next;
        cnt++;
    }
        
    return temp;
 }


 ////optimised solutionnnnnnnn
 Node * getMiddle(Node* head){
    if(head == NULL || head->next == NULL)
    return head;
    //2 node
    if(head->next->next == NULL){
        return head->next;
    }
    Node* slow = head;
    Node* fast = head->next;
    while(fast!= NULL){
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
        }
        slow = slow ->next;
    }
    return slow;
 }


 Node* getLastNodeAddress(Node* head) {
    if (head == nullptr) {
        return nullptr; // If the list is empty, return nullptr
    }

    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    
    return temp; // Return the address of the last node
}
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




void insertBefore(Node* &head, int x, int y) {
    // Check if the list is empty
    if (head == nullptr) {
        cout << "List is empty, cannot insert before " << y << endl;
        return;
    }

    // Special case: Insert before the head node
    if (head->data == y) {
        Node* newNode = new Node(x);
        newNode->next = head;
        head = newNode;
        return;
    }

    // Traverse the list to find the node with data y
    Node* temp = head;
    while (temp->next != nullptr && temp->next->data != y) {
        temp = temp->next;
    }

    // If node with data y is not found
    if (temp->next == nullptr) {
        cout << "Node with data " << y << " not found in the list." << endl;
        return;
    }

    // Insert the new node before the node with data y
    Node* newNode = new Node(x);
    newNode->next = temp->next;
    temp->next = newNode;
}
void moveLastToFront(Node* &head) {
    // If the list is empty or has only one node, no need to move anything
    if (head == nullptr || head->next == nullptr) {
        return;
    }

    Node* prev = nullptr;
    Node* temp = head;

    // Traverse the list to find the last node and the second-to-last node
    while (temp->next != nullptr) {
        prev = temp;
        temp = temp->next;
    }

    // Set the next pointer of the second-to-last node to nullptr
    prev->next = nullptr;

    // Move the last node to the front by making it the new head
    temp->next = head;
    head = temp;
}


   void print(Node* &head){

        // if(head == NULL){
        // cout << "List is empty "<< endl;
        // return ;
        // }
    
       Node* temp = head;
       while(temp!=NULL){
        cout<<temp->data<<"  ";
        temp = temp -> next;
    }
    cout<<endl;
}
// int main() {
//     // Creating a sample linked list
//     Node* node1 = new Node(1);
//     Node* node2 = new Node(2);
//     Node* node3 = new Node(3);
//     Node* node4 = new Node(4);
//     node1->next = node2;
//     node2->next = node3;
//     node3->next = node4;

//     // Original list
//     cout << "Original list: ";
//     print(node1);

//     // Reverse the list
//     Node* reversedHead = reverselinklist(node1);

//     // Print the reversed list
//     cout << "Reversed list: ";
//     print(reversedHead);

//     return 0;
// }
int main(){
    Node* node1= new Node(10);
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;


    Node* head= node1;
    Node* tail= node1;


    print(head);
    insertatHead(head, 12);
    print(head);
    insertatHead(head, 15);
    print(head);
    insertatTail(tail, 69);
    print(head);
    insertatposition(tail, head, 22,1);
    print(head);

    // deletenode(4, head);
    // print(head);
     
    // Original list
    cout << "Original list: ";
    print(head);

    // // Reverse the list
    // Node* reversedHead = reverselinklist(head);

    // // Print the reversed list
    // cout << "Reversed list: ";
    // print(reversedHead);

    getMiddle(head);
    Node* middle = getMiddle(head);
    if(middle != NULL)
    cout<<"middle element is:"<<middle->data<<endl;

  

    // // cout << "head " << head -> data << endl;
    // // cout << "tail " << tail -> data << endl;
    return 0;
}

Node* floydDetectLoop(Node* &head){
    if(head=NULL){
        return NULL;
    }
    Node* slow = head;
    Node* fast = head;
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
            return slow;
    }
    return NULL;
} 