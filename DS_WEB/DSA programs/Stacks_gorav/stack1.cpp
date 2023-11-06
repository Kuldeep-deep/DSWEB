#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 100

// Define a structure to represent the stack
struct Stack {
    int arr[MAX_SIZE];
    int top;
};

// Initialize a stack
void initialize(struct Stack* stack) {
    stack->top = -1;
}

// Push an element onto the stack
bool push(struct Stack* stack, int value) {
    if (stack->top >= MAX_SIZE - 1) {
        // Stack is full
        return false;
    }
    stack->arr[++stack->top] = value;
    return true;
}

// Pop an element from the stack
bool pop(struct Stack* stack, int* value) {
    if (stack->top < 0) {
        // Stack is empty
        return false;
    }
    *value = stack->arr[stack->top--];
    return true;
}

// Peek at the top element of the stack without removing it
bool peek(struct Stack* stack, int* value) {
    if (stack->top < 0) {
        // Stack is empty
        return false;
    }
    *value = stack->arr[stack->top];
    return true;
}

// Check if the stack is empty
bool isEmpty(struct Stack* stack) {
    return stack->top < 0;
}

// Check if the stack is full
bool isFull(struct Stack* stack) {
    return stack->top >= MAX_SIZE - 1;
}

int main() {
    struct Stack stack;
    initialize(&stack);

    printf("Is Empty: %d\n", isEmpty(&stack));
    printf("Is Full: %d\n", isFull(&stack));

    push(&stack, 1);
    push(&stack, 2);
    push(&stack, 3);

    int topValue;
    if (peek(&stack, &topValue)) {
        printf("Top element: %d\n", topValue);
    }

    while (!isEmpty(&stack)) {
        int value;
        if (pop(&stack, &value)) {
            printf("Popped: %d\n", value);
        }
    }

    printf("Is Empty: %d\n", isEmpty(&stack));
    printf("Is Full: %d\n", isFull(&stack));

    return 0;
}

