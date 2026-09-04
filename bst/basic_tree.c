#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* get_new_node(int value){
    struct Node* newnode = (struct Node*) malloc (sizeof(struct Node));
    newnode->data = value;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}

bool search(struct Node* root, int key) {
    if (!root) return false;
    else if (root->data == key) return true;
    else if (key > root->data) search(root->right, key);
    else search(root->left, key);
}   

struct Node* insert(int data, struct Node* root){
    if (!root) {
        root = get_new_node(data);
        return root;
    }
    else {
        if (data < root->data) {
            //move left
            root = root->left;
            insert(data, root);
            printf("left ");
        }
        else {
            //move right
            root = root->right;
            insert(data, root);
            printf("right ");
        }
    }
    return root;
}


int main() {    
    struct Node* root = insert(5, NULL);
    root = insert(4, root);
    root = insert(6, root);
    root = insert(3, root);
    search(root, 6) ? printf("yes") : printf("no");
    return 0;

}