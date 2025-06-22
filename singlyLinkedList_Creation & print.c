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

    struct Node *head = createNode(data);
    struct Node *ptr = head;
    for (int i = 2; i <= n; i++)
    {
        printf("Enter the value for node %d :\t", i);
        scanf("%d", &data);

        // ptr->next = createNode(data);
        ptr = ptr->next = createNode(data);
    }
    return head;
}

struct Node *insertBeg(struct Node *head)
{
    int data;

    printf("\nEnter value for Node which is Insert at Beginning :\t");
    scanf("%d", &data);
    struct Node *ptr = createNode(data);
    ptr->next = head;
    head = ptr;
    return head;
}

struct Node *insertEnd(struct Node *head)
{
    struct Node *ptr = head;
    int data;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    printf("\nEnter value for Node Which is Insert at End :\t");
    scanf("%d", &data);
    struct Node *tmp = createNode(data);
    ptr->next = tmp;
    return head;
}

int main()
{
    int n;

    printf("Enter a length of Linked List : \t");
    scanf("%d", &n);

    struct Node *head = createList(n);
    show(head);
    head = insertBeg(head);
    show(head);
    head = insertEnd(head);
    show(head);
    return 0;
}
