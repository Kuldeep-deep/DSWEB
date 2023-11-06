#include<stdio.h>
#include<stdlib.h>

struct node
{
    int info;
    struct node *link;
};

struct node *top = NULL;

void push(int item)
{
    struct node *newNode;
    newNode = (struct node *)malloc(sizeof(struct node));

    if (newNode == NULL)
    {
        printf("Overflow\n");
        return;
    }

    newNode->info = item;
    newNode->link = top;
    top = newNode;
}

int pop(void)
{
    int item;
    struct node *temp;

    if (top == NULL)
    {
        printf("Stack is underflow\n");
        return -1; // Return a special value to indicate an error
    }

    item = top->info;
    temp = top;
    top = top->link;
    free(temp);
    return item;
}

int isEmpty()
{
    return (top == NULL);
}

int peek()
{
    if (isEmpty())
    {
        printf("Stack is empty\n");
        return -1; // Return a special value to indicate an error
    }

    return top->info;
}

int main()
{
    int choice, data;

    do
    {
        printf("\nStack Operations:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. IsEmpty\n");
        printf("5. Quit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the element to push: ");
            scanf("%d", &data);
            push(data);
            break;
        case 2:
            printf("Popped element: %d\n", pop());
            break;
        case 3:
            printf("Top element: %d\n", peek());
            break;
        case 4:
            printf("Is the stack empty? %s\n", isEmpty() ? "Yes" : "No");
            break;
        case 5:
            printf("Quitting the program.\n");
            break;
        default:
            printf("Invalid choice. Please enter a valid option.\n");
        }

    } while (choice != 5);

    return 0;
}

