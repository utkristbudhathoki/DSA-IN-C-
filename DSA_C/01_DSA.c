// Implementation of Stack Using Array
#include <stdio.h>
#define MAXSIZE 10

int stack[MAXSIZE], top = -1;

// Function declarations
void Push(void);
void Pop(void);
void display(void);

int main() {
    int choice;

    do {
        printf("\n------- STACK -------");
        printf("\n1. Push");
        printf("\n2. Pop");
        printf("\n3. Display");
        printf("\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                Push();
                break;
            case 2:
                Pop();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid choice\n");
        }
    } while (choice != 4);

    return 0;
}

void Push(void) {
    int n;

    if (top == MAXSIZE - 1) {
        printf("Stack Overflow\n");
    } else {
        printf("Enter an element: ");
        scanf("%d", &n);
        stack[++top] = n;
    }
}

void Pop(void) {
    if (top == -1) {
        printf("Stack Underflow\n");
    } else {
        printf("Popped element: %d\n", stack[top--]);
    }
}

void display(void) {
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Stack elements:\n");
        for (int i = top; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
    }
}
