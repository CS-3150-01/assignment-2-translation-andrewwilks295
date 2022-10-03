#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};
struct node* head;
struct node* tail;
void addNode(int input) {
    struct node* next = malloc(sizeof(struct node));
    next->data = input;
    next->next=NULL;
    if(head==NULL){
        head=next;
    }
    else{
        tail->next=next;
        
    }
    tail=next;
}
void display() {
    struct node *current = head;
    if(head == NULL) {    
        printf("List is empty");    
        return;    
    }    
    printf("Nodes of singly linked list: ");    
    while(current != NULL) {    
        //Prints each node by incrementing pointer    
        printf("%d ", current->data);    
        current = current->next;    
    }    
}
int main() {
    head = malloc(sizeof(struct node));
    tail = malloc(sizeof(struct node));
    head = NULL;

    addNode(1);
    addNode(4);
    addNode(3);
    addNode(2);
    display();
    return 0;
}