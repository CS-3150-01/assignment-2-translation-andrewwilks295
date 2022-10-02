#include <stdio.h>
#include <stdlib.h>

int main() {
    struct Node* node;
    NODE* first = malloc(sizeof(NODE));
    first->data = 1;
    printf("%d", first->data);
    return 0;
}
typedef struct Node {
    int data;
    struct Node* head;
    struct Node* next;
    struct Node* prev;
}NODE;
void addNode(int data) {
    struct NODE* head;
    struct NODE* next;

    if (head == NULL) {
        NODE* head = data;
    } else {
        NODE* next = data;
    }
}