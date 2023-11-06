#include<stdio.h>
#include<string.h>

#define MAX 20

char stack[MAX];
int top = -1;

char pop();
void push(char item);
int precedence(char symbol);
int isoperator(char symbol);
void convertip(char infix[], char prefix[]);
void reverseString(char str[]);

int main()
{
    char infix[MAX], prefix[MAX];
    printf("Enter the infix notation:\n");
    fgets(infix, sizeof(infix), stdin);
    infix[strcspn(infix, "\n")] = '\0';  // Remove trailing newline character

    convertip(infix, prefix);
    printf("The prefix notation is:\n");
    puts(prefix);

    return 0;
}

void push(char item)
{
    top++;
    stack[top] = item;
}

char pop()
{
    char a;
    a = stack[top];
    top--;
    return a;
}

int precedence(char symbol)
{
    int p;
    switch (symbol)
    {
    case '+':
    case '-':
        p = 2;
        break;
    case '*':
    case '/':
        p = 4;
        break;
    case '^':
        p = 6;
        break;
    case '(':
    case ')':
    case '#':
        p = 1;
        break;
    }
    return p;
}

int isoperator(char symbol)
{
    switch (symbol)
    {
    case '+':
    case '-':
    case '*':
    case '/':
    case '^':
    case '(':
    case ')':
        return 1;
    default:
        return 0;
    }
}

void convertip(char infix[], char prefix[])
{
    int i, symbol, j = 0;
    stack[++top] = '#';

    // Reverse the infix expression
    reverseString(infix);

    for (i = 0; i < strlen(infix); i++)
    {
        symbol = infix[i];
        if (isoperator(symbol) == 0)
        {
            prefix[j] = symbol;
            j++;
        }
        else
        {
            if (symbol == ')')
                push(symbol);
            else if (symbol == '(')
            {
                while (stack[top] != ')')
                {
                    prefix[j] = pop();
                    j++;
                }
                pop();
            }
            else
            {
                if (precedence(symbol) > precedence(stack[top]))
                    push(symbol);
                else
                {
                    while (precedence(symbol) <= precedence(stack[top]))
                    {
                        prefix[j] = pop();
                        j++;
                    }
                    push(symbol);
                }
            }
        }
    }

    while (stack[top] != '#')
    {
        prefix[j] = pop();
        j++;
    }
    prefix[j] = '\0';

   
    reverseString(prefix);
}

void reverseString(char str[])
{
    int length = strlen(str);
    int i;
    for ( i = 0; i < length / 2; i++)
    {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

