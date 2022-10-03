#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    struct Node* node;
} NODE;

void addNode(int data) {
    struct NODE* head;
    struct NODE* next;

    if (head == NULL) {
        NODE* head = data;
    } else {
        NODE* next = data;
    }
}
void display() {
    NODE* head;
    if (head == NULL) {
        printf("List is empty");
    } else {
        while(head != NULL) {
            printf("%i", head->data);
        }
    }
}
int main() {
    struct Node* node;
    int data;
    NODE* first = malloc(sizeof(NODE));


    return 0;

    free(node);
}