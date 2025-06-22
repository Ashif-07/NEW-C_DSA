#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int show(struct Node *head)
{
    struct Node *ptr = head;
    printf("Linked List :\t");
    while (ptr != NULL)
    {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL");
    return 0;
}

struct Node *createNode(int data)
{
    struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));
    (*newnode).data = data;
    newnode->next = NULL;
    return newnode;
}

struct Node *createList(int n)
{
    if (0 >= n)
        return NULL;
    int data;
    printf("Enter the value for node 1 :\t");
    scanf("%d", &data);
    system("cls");
    struct Node *head = createNode(data);
    struct Node *ptr = head;
    for (int i = 2; i <= n; i++)
    {
        printf("Enter the value for node %d :\t", i);
        scanf("%d", &data);
        system("cls");
        // ptr->next = createNode(data);
        ptr = ptr->next = createNode(data);
    }
    return head;
}

int main()
{
    int n;
    printf("Enter a length of Linked List : \t");
    scanf("%d", &n);
    system("cls");
    struct Node *head = createList(n);
    show(head);
    return 0;
}
