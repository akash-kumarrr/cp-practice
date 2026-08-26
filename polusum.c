#include "stdio.h"
#include "stdlib.h"

struct Node {
    int coeff;
    struct Node* next;
};

#define le(i ,e) for (int i=0; i<e; i++)

struct Node* getNewNode(int value) {
    struct Node* newnode = (struct Node*) malloc (sizeof(struct Node));
    newnode->coeff = value;
    return newnode;
}

int main() {
    int max_deg, a;
    struct Node *poly1, *poly2, *current;

    
    le(i, max_deg+1) {
        printf("enter coeff in polynomial 1 for degree %d", i);
        scanf("%d", &a);

        struct Node* newnode = getNewNode(a);
        if (!a) {
            poly1 = newnode;
            current = poly1;
        }
        else {
            current->next = newnode;
            current = current->next;
        }
    }

    le(i, max_deg+1) {
        printf("enter coeff in polynomial 2 for degree %d", i);
        scanf("%d", &a);

        struct Node* newnode = getNewNode(a);
        if (!a) {
            poly1 = newnode;
            current = poly1;
        }
        else {
            current->next = newnode;
            current = current->next;
        }
    }

    struct Node *current1, *current2;
    current=poly1, current2 = poly2;
}