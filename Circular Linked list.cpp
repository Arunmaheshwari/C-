#include <iostream>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int data)
    {
        val = data;
        next = NULL;
    }
};

class circularLinkedList
{
public:
    Node *head;

    circularLinkedList()
    {
        head = NULL;
    }


    void display(){
        Node * temp = head;
        do{
            cout<<temp->val<<"->"<<endl;
            temp = temp->next;

        }while (temp!=head);
        cout<<endl;
        
    }

    void checkCircularLL(){
        Node * temp = head;
        for(int i = 0; i<15; i++){
            cout<<temp->val<<"->";
            temp = temp->next;
        }
        cout<<endl;
    }

   
    void insertAtstart(int val)
    {

        Node *new_node = new Node(val);
        if (head == NULL)
        {
            head = new_node;
            new_node->next = head; // circular linked list
            return;
        }

        Node* tail = head;
        while(tail->next!=head){
            tail= tail->next;
        }
        // now tail is pointing to the last node

        tail->next = new_node;
        new_node->next = head;
        head = new_node;
    }  

   // Another way to defined 'insertAtstart' function outside the class is given below
   // void insertAtstart(Node* &head, int val)
   //     {

   //         Node *new_node = new Node(val);
   //         if (head == NULL)
   //         {
   //             head = new_node;
   //             new_node->next = head; // circular linked list
   //             return;
   //         }   
              
   //     }

   void insertAtEnd(int val){
     Node* new_node = new Node(val);
     if(head==NULL){
        head = new_node;
        new_node->next = head; // circular linked list
        return;
     }

     Node * tail = head;
     while(tail->next!= head){
        tail = tail->next;
     }
     // Now tail node is pointing to last node

     tail->next = new_node;
     new_node->next = head;
     return;

   }

};   


int main(){
    circularLinkedList cll;

    cll.insertAtstart(3);
    cll.insertAtstart(2);
    cll.insertAtstart(1);
    cll.display();

    // cll.checkCircularLL();

    cll.insertAtEnd(4);
    cll.insertAtEnd(4);
    cll.display();
    



    return 0;
    
}