#include <stdio.h>

#define MAX_SIZE 10

int stack[MAX_SIZE];
int top = -1;


void push(int value) {
    if (top == MAX_SIZE - 1) {
        printf("Stack Overflow: The stack is full.\n");
    } else {
        stack[++top] = value;
        printf("Pushed %d onto the stack.\n", value);
    }
}

int pop() {
    if (top == -1) {
        printf("Stack Underflow: The stack is empty.\n");
        return -1; 
    } else {
        int poppedValue = stack[top];
        printf("Popped %d from the stack.\n", poppedValue);
        return poppedValue;
        top--;
    }
}

int peek() {
    if (top == -1) {
        printf("Stack is empty. No element to peek.\n");
        return -1;
    } else {
        return stack[top];
    }
}

// Function to check if the stack is empty
int isEmpty() {
    return top == -1;
}

// Function to check if the stack is full
int isFull() {
    return top == MAX_SIZE - 1;
}

int main() {
    int choice, value;

    do {
        printf("\nStack Operations:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Check if Empty\n");
        printf("5. Check if Full\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the value to push onto the stack: ");
                scanf("%d", &value);
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                printf("Top element: %d\n", peek());
                break;
            case 4:
                printf("Is the stack empty? %s\n", isEmpty() ? "Yes" : "No");
                break;
            case 5:
                printf("Is the stack full? %s\n", isFull() ? "Yes" : "No");
                break;
            case 0:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 0);

    return 0;
}

