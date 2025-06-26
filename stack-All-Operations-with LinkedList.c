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

int main()
{

    int choice;
    system("cls");

    printf("\n-_-_-_-_-_-_-_- Stack -_-_-_-_-_-_-_-\n");
    do
    {
        printf("\n Press 1 : Push \n Press 2 : Pop \n Press 3 : Peek \n Press 4 : Exit \n\n Enter your Choice : \t");
        scanf("%d", &choice);
        if(choice>4||choice<0){
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
        
        }
    } while (choice != 4);

    return 0;
}
