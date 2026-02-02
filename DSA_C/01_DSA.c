#include<stdio.h>
#define MAXSIZE 10

int stack[MAXSIZE], top = -1;

void push();
void pop();
void display();

int main() {
    int choice;

    do {
        printf("-----STACK------");
        printf("\n 1.PUSH");
        printf("\n 2.POP");
        printf("\n 3.DISPLAY");
        printf("\n 4.EXIT \n");
        printf("---Enter choice ---\n");

        scanf("%d", &choice);  

        switch(choice) {
            case 1:
                push();
                break;

            case 2:
                pop();
                break;

            case 3:
                display();
                break;

            case 4:
                printf(".....Exiting program\n");
                break;

            default:
                printf("Invalid choice\n");
        }
    } while(choice != 4);

    return 0;
}

void push() {
    int n;
    if(top == MAXSIZE - 1) {
        printf("Stack overflow\n");
    } else {
        printf("Enter an element: ");
        scanf("%d", &n);
        stack[++top] = n;
    }
}

void pop() {
    if(top == -1) {
        printf("Stack underflow\n");
    } else {
        printf("Popped element: %d\n", stack[top--]);
    }
}

void display() {
    if(top == -1) {
        printf("IT'S EMPTY\n");
    } else {
        printf("Stack elements:\n");
        for(int i = top; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
    }
}
