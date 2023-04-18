#include <iostream>
using namespace std;

class Node
{
public:
    int val;
    Node *pre;
    Node *next;

    Node(int data)
    {
        val = data;
        pre = NULL;
        next = NULL;
    }
};

class Doublylinkedlist
{
public:
    Node *head;
    Node *tail;

    Doublylinkedlist()
    {
        head = NULL;
        tail = NULL;
    }

    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << "<->";
            temp = temp->next;
        }
        cout << endl;
    }

    void insertAtStart(int val)
    {
        Node *new_node = new Node(val);
        if (head == NULL)
        {
            head = new_node;
            tail = new_node;
            return;
        }

        new_node->next = head;
        head->pre = new_node;
        head = new_node;
        return;
    };

    void insertAtEnd(int val)
    {
        Node *new_node = new Node(val);
        if (tail == NULL)
        {
            head = new_node;
            tail = new_node;
            return;
        }
        tail->next = new_node;
        new_node->pre = tail;
        tail = new_node;
        return;
    };

    void insertAtPosition(int val, int k)
    {
        // assuming k is less or equal to lenth of doubly linked list
        Node *temp = head;
        int count = 1;
        while (count < (k - 1))
        {
            temp = temp->next;
            count++;
        }
        // temp will be pointing to the node at k-1 position
        Node *new_node = new Node(val);
        new_node->next = temp->next;
        temp->next = new_node;

        new_node->pre = temp;
        new_node->next->pre = new_node;
        return;
    };

    void deleteAtStart()
    {
        if (head = NULL)
        {
            return;
        }
        Node *temp = head;
        head = head->next;

        if (head == NULL)
        {
            tail = NULL;
        }
        else
        {
            head->pre = NULL;
        }
        free(temp);
        return;
    };

    void deleteAtEnd()
    {
        if (head == NULL)
        {
            return;
        }

        Node *temp = tail;
        tail = tail->pre;

        if (tail == NULL)
        {
            head = NULL;
        }
        else
        {
            tail->next = NULL;
        }
        free(temp);
        return;
    };

    void deleteAtPositon(int k)
    {
        // assuming k is less than or equal to the length of dll
        Node *temp = head;
        int counter = 1;
        while (counter < k)
        {
            temp = temp->next;
            counter++;
        }
        // now tamp is pointing to node at kth position

        temp->pre->next = temp->next;
        temp->next->pre = temp->pre;

        free(temp);
        return;
    }
};

int main()
{
    Node *new_node = new Node(3);

    Doublylinkedlist dll;
    // dll.head = new_node;
    // dll.tail = new_node;
    // cout<<dll.head->val<<endl;

    dll.insertAtStart(1);
    dll.insertAtStart(2);
    dll.insertAtStart(3);

    dll.display();

    dll.insertAtEnd(4);
    dll.insertAtEnd(5);
    dll.insertAtEnd(6);

    dll.display();

    dll.insertAtPosition(7, 3);

    dll.display();

    dll.deleteAtStart();

    dll.display();

    dll.deleteAtEnd();
    dll.display();




    dll.deleteAtPositon(4);
    dll.display();



    return 0;
}