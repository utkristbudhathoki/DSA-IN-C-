#include <stdio.h>
#include <ctype.h>

#define MAX 100

char stack[MAX];
int top = -1;

/* Function to push into stack */
void push(char x) {
    stack[++top] = x;
}

/* Function to pop from stack */
char pop() {
    if (top == -1)
        return -1;
    else
        return stack[top--];
}

/* Function to return precedence of operators */
int priority(char x) {
    if (x == '(')
        return 0;
    if (x == '+' || x == '-')
        return 1;
    if (x == '*' || x == '/')
        return 2;
    if (x == '^')
        return 3;
    return 0;
}

int main() {
    char infix[MAX], postfix[MAX];
    char ch;
    int i = 0, k = 0;

    printf("Enter infix expression: ");
    scanf("%s", infix);

    while ((ch = infix[i++]) != '\0') {

        /* If operand, add to postfix */
        if (isalnum(ch)) {
            postfix[k++] = ch;
        }

        /* If left parenthesis, push to stack */
        else if (ch == '(') {
            push(ch);
        }

        /* If right parenthesis, pop until '(' */
        else if (ch == ')') {
            while (stack[top] != '(')
                postfix[k++] = pop();
            pop();  // remove '('
        }

        /* If operator */
        else {
            while (priority(stack[top]) >= priority(ch))
                postfix[k++] = pop();
            push(ch);
        }
    }

    /* Pop remaining operators */
    while (top != -1)
        postfix[k++] = pop();

    postfix[k] = '\0';

    printf("Postfix expression: %s\n", postfix);

    return 0;
}
