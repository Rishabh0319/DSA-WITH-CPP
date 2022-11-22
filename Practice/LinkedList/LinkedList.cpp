
#include <iostream>
using namespace std;

class Node
{
   public:
   int data;
   Node *next;
};

void printList(Node *head)
{
   while(head != NULL)
   {
      cout<< head->data <<" ";
      head = head->next;
   } 
}

void insertAtFirst(Node **head, int new_Data)
{
   Node *new_Node = new Node();
   new_Node->data = new_Data;
   new_Node->next = *head;
   *head = new_Node;
}

void insertAtLast(Node **head, int new_Data)
{
   Node *new_node = new Node();
   new_node->data = new_Data;
   new_node->next = NULL;

   if(*head == NULL)
   {
      *head = new_node;
      return;
   }

   Node *last = *head;

   while(last->next != NULL)
   {
      last = last->next;
   }

   last->next = new_node;
   return;
}

int main()
{
   Node *head = NULL;

   insertAtLast(&head,10);
   insertAtLast(&head,20);
   insertAtLast(&head,30);
   insertAtLast(&head,40);
   insertAtLast(&head,50);
   insertAtFirst(&head,1);
   printList(head);
   return 0;
}
