#include<stdio.h>
#include<string.h>

#define max 100

struct stack {
    char b[max];
    int top;
};

void push(struct stack* s, char k) {
    if (s->top == max - 1)
        printf("\n Stack is full");
    else
        s->b[++s->top] = k;
}

char pop(struct stack* s) {
    char c;
    if (s->top == -1) {
        printf("\n Stack is empty");
        return '\0';  
    } else {
        c = s->b[s->top--];
        return c;
    }
}

int main() {
    char name[max];
    struct stack s;
    s.top = -1;

    printf("Enter the string: ");
    gets(name);

    int i = 0;
    while (name[i] != '\0') {
        push(&s, name[i]);
        i++;
    }

    printf("\n Reversed string: ");
    while (s.top != -1) {
        printf("%c", pop(&s));
    }

    return 0;
}

