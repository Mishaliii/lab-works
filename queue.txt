#include <stdio.h>
#include <stdlib.h>
#define max_size 100

int queue[max_size], front = -1, rear = -1;

void add();
void delete();
void search();

void main() {
    int ch, op = 1;
    do {
        printf("\n1. Add\n2. Delete\n3. Search\nEnter your choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                add();
                break;
            case 2:
                delete();
                break;
            case 3:
                search();
                break;
            default:
                printf("\nInvalid choice");
        }

        printf("\nDo you want to continue? (1 for Yes, 0 for No): ");
        scanf("%d", &op);
    } while (op == 1);
}

void add() {
    if (rear == max_size - 1) {
        printf("\nQueue is full");
    } else {
        int element;
        printf("\nEnter your element: ");
        scanf("%d", &element);
        if (front == -1) front = 0;
        rear++;
        queue[rear] = element;
        printf("\n%d added to the queue", element);
    }
}

void delete() {
    if (front > rear || front == -1) {
        printf("\nQueue is empty");
    } else {
        printf("\n%d is deleted", queue[front]);
        front++;
        if (front > rear) {
            front = rear = -1;  // Reset the queue when all elements are deleted
        }
    }
}

void search() {
    if (front > rear || front == -1) {
        printf("\nQueue is empty");
    } else {
        int key, found = 0;
        printf("\nEnter the element to be searched: ");
        scanf("%d", &key);

        for (int i = front; i <= rear; i++) {
            if (queue[i] == key) {
                found = 1;
                printf("\n%d found at position %d", key, i - front + 1);
                break;
            }
        }
        if (!found) {
            printf("\n%d not found", key);
        }
    }
}
