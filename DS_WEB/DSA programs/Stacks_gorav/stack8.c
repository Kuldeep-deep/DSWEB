#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#define max 20
int stack[max];
int top = -1;

void push(int num) {
    if(top== max- 1) {
        printf("stack is overflow");
        return;
    } else {
        top = top + 1;
        stack[top] = num;
        printf("pushed element is %d\n", num);
    }
}

int pop() {
    int num;
    if(top == -1) {
        printf("Stack is underflow");
        return -1; // Return a special value to indicate underflow
    } else {
        num = stack[top];
        top = top - 1;
        printf("the popped element is %d\n", num);
        return num;
    }
}

int solve(int op1, int op2, char ch) {
    int result;
    printf("op1=%d, op2=%d, ch=%c\n", op1, op2, ch);

    if(op1 < op2) {
        int temp = op1;
        op1 = op2;
        op2 = temp;
    }

    if(ch == '+')
        result = op1 + op2;
    else if(ch == '-')
        result = op1 - op2;
    else if(ch == '*')
        result = op1 * op2;
    else if(ch == '/')
        result = op1 / op2;
    else if(ch == '%')
        result = op1 % op2;
    else {
        printf("the operator is not identified\n");
        exit(0);
    }

    printf("%d\n", result);
    return result;
}

int main() {
    char str[50], ch;
    int i = 0, n, op1, op2;

    printf("Enter the postfix string: ");
    scanf("%s", str);

    ch = str[i];
    while(ch != '\0') {
        printf("the char is=%c\n", ch);
        if(isdigit(ch)) {
            n = ch - '0';
            push(n);
        } else {
            op1 = pop();
            op2 = pop();
            n = solve(op1, op2, ch);
            push(n);
        }
        ch = str[++i];
    }

    printf("The value of the arithmetic expression is=%d\n", pop());
    return 0;
}

