#include <stdio.h>
#include <stdlib.h>

struct node {
int data;
struct node* right; //set to NULL?
struct node* left;
}
BinarySearchTree() {
    root = NULL;
}
int main() {
    typedef struct node();
    printf("Total number of possible Binary Search with given key: %i", numOfBST());
    return 0;
} NODE;
int factorial(int num) {
    int fact;
    if (num == 0) {
        return 1;
    } else {
        while (num > 1) {
            fact = fact * num;
            num--;
        }
    }
    return fact;
}
int numOfBST (int key) {
    int catalanNumber= factorial(2 + key)/(factorial(key + 1) * factorial(key));
    return catalanNumber;
}