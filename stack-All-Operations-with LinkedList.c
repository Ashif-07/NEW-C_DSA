#include <stdio.h>
#include <stdlib.h>

struct Stack
{
    int data;
    struct Stack *next;
};

struct Stack *top = NULL;

void push()
{
    struct Stack *newnode = (struct Stack *)malloc(sizeof(struct Stack));
    if (newnode == NULL)
    {
        printf("Stack is Overflow !");
    }
    else
    {
        printf("Enter data for PUSH in Stack : \t");
        scanf("%d", &newnode->data);
        newnode->next = top;
        top = newnode;
    }
}

void pop()
{
    if (top == NULL)
    {
        printf("Stack Is Underflow !");
    }
    else
    {
        printf("popped %d ", top->data);
        struct Stack *temp = top;
        top = top->next;
        free(temp);
    }
}

void peek()
{
    if (top == NULL)
        printf("Stack Is Empty !");
    else
        printf("peeked %d ", top->data);
}
void index()
{
    if (top == NULL)
        printf("Stack Is Empty !");
    else
    {
        int n;
        printf("enter the index");
        scanf("%d", &n);
        struct Stack *temp = top;
        for (int i = 0; i < n && temp != NULL; ++i)
        {
            temp = temp->next;
        }
        if (temp != NULL)
            printf("value = %d ", temp->data);
        else
            printf("give valid index");
    }
}

void stackBottom()
{
    struct Stack *temp = top;
    while (temp->next != NULL)
        temp = temp->next;
    printf("\n Stack Bottom is '%d' ", temp->data);
}

void stackTop()
{
    printf("Stack Top = %d ", top->data);
}
int main()
{

    int choice;
    system("cls");

    printf("\n-_-_-_-_-_-_-_- Stack -_-_-_-_-_-_-_-\n");
    do
    {
        printf("\n Press 1 : Push \n Press 2 : Pop \n Press 3 : Peek \n Press 4 : Search By Index\n Press 5: Stack Bottom \n Press 6: Stack Top\n Press 7: For Exit\n\n Enter your Choice : \t");
        scanf("%d", &choice);
        if (choice > 7 || choice < 0)
        {
            printf("Invalid Choice \nPlease Enter valid Choice. ");
        }
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            index();
            break;
        case 5:
            stackBottom();
            break;
        case 6:
            stackTop();
            break;
        }
    } while (choice != 7);

    return 0;
}
