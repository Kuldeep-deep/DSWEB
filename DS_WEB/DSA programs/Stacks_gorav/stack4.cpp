#include <stdio.h>

#define max 100

struct stack {
    int top;
    char expression[max];
};

struct stack mystack;

void push(struct stack *mystack, char k) {
    if (mystack->top == max - 1) {
        printf("Stack is overflow\n");
    } else {
        mystack->expression[++mystack->top] = k;
    }
}

char pop(struct stack *mystack) {
    if (mystack->top == -1) {
        printf("Stack is underflow\n");
        return '\0';  // Return a default value in case of underflow
    } else {
        return mystack->expression[mystack->top--];
    }
}

int isempty(struct stack *mystack) {
    return (mystack->top == -1);
}

int main() {
    char expression[max];
    int i = 0;
    char symbol;

    mystack.top = -1;

    printf("\nEnter the Expression: ");
    scanf("%s", expression);

    while (expression[i] != '\0') {
        switch (expression[i]) {
            case '(':
            case '[':
            case '{':
                push(&mystack, expression[i]);
                break;
            case ')':
                symbol = pop(&mystack);
                if (symbol != '(') {
                    printf("Expression is unmatched\n");
                    return 0;
                }
                break;
            case ']':
                symbol = pop(&mystack);
                if (symbol != '[') {
                    printf("Expression is unmatched\n");
                    return 0;
                }
                break;
            case '}':
                symbol = pop(&mystack);
                if (symbol != '{') {
                    printf("Expression is unmatched\n");
                    return 0;
                }
                break;
        }
        i++;
    }

    if (!isempty(&mystack)) {
        printf("Expression is unmatched\n");
    } else {
        printf("Expression is okay\n");
    }

    return 0;
}

