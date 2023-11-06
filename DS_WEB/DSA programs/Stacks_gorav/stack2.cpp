#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 100

typedef struct {
    char data[MAX_SIZE];
    int top;
} CharStack;

// Initialize the character stack
void initCharStack(CharStack *stack) {
    stack->top = -1;
}

// Check if the character stack is empty
bool isCharEmpty(CharStack *stack) {
    return stack->top == -1;
}

// Check if the character stack is full
bool isCharFull(CharStack *stack) {
    return stack->top == MAX_SIZE - 1;
}

// Push a character onto the character stack
bool pushChar(CharStack *stack, char value) {
  if (isCharFull(stack)) {
////        printf("Character stack is full. Cannot push '%c'.\n", value);
    return false;
 }
 stack->data[++stack->top] = value;
    return true;
}

// Pop a character from the character stack
bool popChar(CharStack *stack) {
    if (isCharEmpty(stack)) {
        printf("Character stack is empty. Cannot pop.\n");
        return false;
    }
    stack->top--;
    return true;
}

// Peek at the top character of the character stack
char peekChar(CharStack *stack) {
    if (isCharEmpty(stack)) {
        printf("Character stack is empty. Cannot peek.\n");
        return '\0'; // Return a special value to indicate an error
    }
    return stack->data[stack->top];
}

int main() {
    CharStack stack;
    initCharStack(&stack);

    // Push characters onto the character stack
    pushChar(&stack, 'A');
    pushChar(&stack, 'B');
    pushChar(&stack, 'C');

    // Print the top character
    printf("Top character: %c\n", peekChar(&stack));

    // Pop characters from the character stack
    popChar(&stack);
    popChar(&stack);

    // Check if the character stack is empty
    if (isCharEmpty(&stack)) {
        printf("Character stack is empty.\n");
    } else {
        printf("Character stack is not empty.\n");
    }
     if (isCharFull(&stack)) {
        printf("Character stack is full. Cannot push .\n");
        return false;}
        else
        printf("character stack is not full");
    

    return 0;
}



