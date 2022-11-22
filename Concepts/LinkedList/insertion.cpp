

/* ******* create new node ******** */


// #include<iostream>
// using namespace std;

// class Node
// {
//     public:
//         int data;
//         Node *next;
// };


// void printList(Node*);

// int main()
// {

//     Node *head = new Node();
//     Node *second = new Node();
//     Node *third = new Node();

//     head->data = 10;
//     head->next = second;

//     second->data = 20;
//     second->next = third;

//     third->data = 30;
//     third->next = NULL; 

//     printList(head);
  
//     return 0;
// }

// void printList(Node *n)
// {
//     while(n != NULL)
//     {
//         cout<< n->data <<"--> ";
//         n = n->next;
//     }
// }



/* ******* insertion of new node ******** */

#include<iostream>
using namespace std;

class Node
{
   public:
        int data;
        Node *next;
};

void printList(Node *n)
{
    while(n != NULL)
    {
       cout <<n->data <<" ";
       n = n->next;
    }
}

void insertAtFirst(Node **head, int data)
{
   Node *newNode = new Node();
   newNode->data = data;
   newNode->next = *head;
   *head = newNode;
}

void insertAtLast(Node **head, int new_data)
{
    Node *new_Node = new Node();

    new_Node->data = new_data;
    new_Node->next = NULL;

    if(*head == NULL)
    {
       *head = new_Node;
       return;
    }

    Node *last = *head;

    while (last->next != NULL)
    {
        last = last->next;
    }

    last->next = new_Node;
}

int main()
{
   Node *head = NULL;
   insertAtFirst(&head,10);
   insertAtFirst(&head,20);
   insertAtFirst(&head,30);
   insertAtFirst(&head,40);
   insertAtLast(&head,9);
   insertAtLast(&head,8);
   insertAtLast(&head,7);
   insertAtLast(&head,6);
   printList(head);
}






