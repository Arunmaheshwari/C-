#include<iostream>
using namespace std;


// Creating linked list

class Node{
    int val;
    Node* next;

    Node(int data){
        val = data;
        next = NULL;
    }
};
// Insertion at head

void insertionAtHead(Node* &head, int val){
    Node* new_node = new Node(val);
    new_node->next = head;
    head = new_node;
}

//Insertion at tail

void insertionAtTail(Node* &head, int val){
    Node* new_node = new Node(val);

    Node* temp=head; 
    while(temp->next!=NULL){
        temp= temp->next;
    }
    temp->next=new_node;
}
// Inserting at arbitrary position
void insertPosition(Node* &head, int val, int val){
    if(pos==0){
        insertionAtHead(head,val);
        return;
    }

    Node* new_node = new Node(val);
    Node* temp = head;
    int current_pos = 0;
    while(current_pos!=pos-1){
        temp = temp->next;
        current_pos++;
    }
    // temp is pointing to node at pos-1
    new_node->next = temp->next;
    temp->next = new_node;
}

// Update at kth position

void updatePosition(Node* &head, int k, int val){
    Node* temp = head;
    int curr_pos = 0;
    while(curr_pos!=k){
        temp = temp->next;
        curr_pos++;
    }
    // temp will be pointing to the kth node
    temp->val = val;
}

void deleteHead(Node* &head){

    Node* temp = head;
    head= head->next;
    free(temp);
}

// Delete at tail

void deleteAtTail(Node* &head){
    Node* second_last = head;
    while(second_last->next->next!=NULL){
        second_last= second_last->next;
    }
    //now second last is pointiong to second last node

    Node* temp = second_last->next;// node to be deleted
    free(temp);
}
// Traversing
void display(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    // Node* n = new Node(1);
    // cout<<n->val<<" "<<n->next<<endl;

    Node* head = NULL;
    insertionAtHead(head, 2);
    display(head);
    insertionAtHead(head, 1);
    display(head);

    insertionAtTail(head, 3);
    display(head);

    insertPosition(head, 4, 1);
    display(head);

    updatePosition(head, 2,5);
    display(head);


    deleteHead(head);
    display(head);
    
    deleteAtTail(head);
    display(head);
     return 0;
}