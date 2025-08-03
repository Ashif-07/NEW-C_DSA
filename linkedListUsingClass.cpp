#include <iostream>
using namespace std;

class Node
{
public:
       int data;
       Node *next;

       Node(int value)
       {
              data = value;
              next = nullptr;
       }
};

class linkedList
{
private:
       Node *head;

public:
       linkedList()
       {
              head = nullptr;
       }

       Node *createNode(int value)
       {
              return new Node(value);
       }

       void insertAtEnd(int value)
       {
              Node *newNode = createNode(value);
              if (head == nullptr)
              {
                     head = newNode;
                     return;
              }
              Node *temp = head;
              while (temp->next != nullptr)
                     temp = temp->next;
              temp->next = newNode;
       }

       void insertAtBeginning(int value)
       {
              Node *newnode = createNode(value);
              newnode->next = head;
              head = newnode;
       }

       void createList(int n)
       {
              int value;
              char ch;
              for (int i = 1; i <= n; i++)
              {
                     cout << "Enter Node " << i << " Data/Value  : ";
                     cin >> value;
                     cout << "Insert this data at the beginning or end of the linked list.\n Press 'B' for beginning and Press 'E' for end : ";
                     cin >> ch;
                     if (ch == 'b' || ch == 'B')
                     {
                            insertAtBeginning(value);
                            cout << value << " is Successfully inserted at Beginning of Linked List.\n";
                     }
                     else if (ch == 'e' || ch == 'E')
                     {
                            insertAtEnd(value);
                            cout << value << " is Successfully inserted at End of Linked list.\n";
                     }
                     else
                            cout << "You pressed another key except 'B' and 'E' so " << value << " is not inserted ! \n";
              }
       }

       void display()
       {
              if (head == nullptr)
              {
                     cout << "Linked List is Empty :";
                     return;
              }
              Node *temp = head;
              while (temp != nullptr)
              {
                     cout << temp->data << " -> ";
                     temp = temp->next;
              }
              cout << "NULL\n";
       }
};

int main()
{
       system("cls");
       linkedList o1;
       int n;
       cout << "Enter the Length of Linked List : ";
       cin >> n;
       o1.createList(n);
       o1.display();
       return 0;
}
