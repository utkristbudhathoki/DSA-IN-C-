#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 100

char stack[MAX];
int top = -1;

/* Stack operations */
void push(char x) {
    stack[++top] = x;
}

char pop() {
    if (top == -1)
        return -1;
    else
        return stack[top--];
}

/* Operator precedence */
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

/* Reverse a string */
void reverse(char exp[]) {
    int i, j;
    char temp;
    for (i = 0, j = strlen(exp) - 1; i < j; i++, j--) {
        temp = exp[i];
        exp[i] = exp[j];
        exp[j] = temp;
    }
}

int main() {
    char infix[MAX], prefix[MAX];
    int i, k = 0;
    char ch;

    printf("Enter infix expression: ");
    scanf("%s", infix);

    /* Step 1: Reverse infix */
    reverse(infix);

    /* Step 2: Replace brackets */
    for (i = 0; infix[i] != '\0'; i++) {
        if (infix[i] == '(')
            infix[i] = ')';
        else if (infix[i] == ')')
            infix[i] = '(';
    }

    /* Step 3: Infix to Postfix */
    for (i = 0; infix[i] != '\0'; i++) {
        ch = infix[i];

        if (isalnum(ch)) {
            prefix[k++] = ch;
        }
        else if (ch == '(') {
            push(ch);
        }
        else if (ch == ')') {
            while (stack[top] != '(')
                prefix[k++] = pop();
            pop();
        }
        else {
            while (priority(stack[top]) >= priority(ch))
                prefix[k++] = pop();
            push(ch);
        }
    }

    while (top != -1)
        prefix[k++] = pop();

    prefix[k] = '\0';

    /* Step 4: Reverse postfix to get prefix */
    reverse(prefix);

    printf("Prefix expression: %s\n", prefix);

    return 0;
}
