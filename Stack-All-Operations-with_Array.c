#include <stdio.h>
#define MAX_SIZE 10

int stack[MAX_SIZE], top = -1;

void push()
{
    if (top == MAX_SIZE - 1)
        printf("Stack is overflow !\n");
    else
    {
        printf("Enter the Element for Push in Stack : \t");
        scanf("%d", &stack[++top]);
    }
}

void pop()
{
    if (top == -1)
        printf("stack is Underflow !\n");
    else
        printf("Popped Element is %d ", stack[top--]);
}

void peek()
{
    if (top == -1)
        printf("stack is Empty !\n");
    else
        printf("Peeked Element is %d ", stack[top]);
}

int main()
{
    int choice;
    // system("cls");

    printf("\n-_-_-_-_-_-_-_- Stack -_-_-_-_-_-_-_-\n");
    do
    {
        printf("\n Press 1 : Push \n Press 2 : Pop \n Press 3 : Peek \n Press 4 : Exit \n\n Enter your Choice : \t");
        scanf("%d", &choice);
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
        deafault:
            printf("Invalid Choice \nPlease Enter valid Choice. ");
        }
    } while (choice != 4);
}
