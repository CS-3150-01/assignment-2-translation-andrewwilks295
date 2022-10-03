#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node* right; //set to NULL?
    struct node* left;
}NODE;
NODE BinarySearchTree() {
    NODE* root;
}
int factorial(int num) {
    int fact = 1;
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
    int catalanNumber= factorial(2 * key)/(factorial(key + 1) * factorial(key));
    return catalanNumber;
}
int main() {
    NODE bt = BinarySearchTree();
    printf("Total number of possible Binary Search with given key: %i", numOfBST(5));
    return 0;
}