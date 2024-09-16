#include <stdio.h>

#define MAX_SIZE 5

int stack[MAX_SIZE];
int top = -1;

void push(int element) {
    if (top >= MAX_SIZE - 1) {
        printf("Overflow\n");
    } else {
        top = top + 1;
        stack[top] = element;
    }
}

void pop() {
    if (top == -1) {
        printf("Underflow\n");
    } else {
        int element = stack[top];
        top = top - 1;
        printf("Popped element: %d\n", element);
    }
}

void traversal() {
    printf("Stack elements are:\n");
    for (int j = 0; j <= top; j++) {
        printf("%d\n", stack[j]);
    }
}

int main() {
    int choice, element;

    while (1) {
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Traversal\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the element to push: ");
                scanf("%d", &element);
                push(element);
                break;
            case 2:
                pop();
                break;
            case 3:
                traversal();
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}