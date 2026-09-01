#include "stdio.h"
#include "stdlib.h"

#define le(i, e) for (int i=0; i<e; i++)

struct Node {
    int data;
    struct Node* next;
};

struct Node* get_new_node(int value) {
    struct Node* newnode = (struct Node*) malloc (sizeof(struct Node));
    newnode->data = value;
    newnode->next = NULL;
    return newnode;
}

struct Node* reverse_linked_list(struct Node* head) {
    struct Node* reverse_head = NULL;
    struct Node* current = head;
    while (current) {
        struct Node* newnode = get_new_node(current->data);
        if (reverse_head == NULL) {
            reverse_head = newnode;
        }

        else {
            newnode->next = reverse_head;
            reverse_head = newnode;   
        }
        current = current->next;
    }
    return reverse_head;
}

void transverse(struct Node* head) {
    struct Node* current = head;
    while(current) {
        printf("%d ", current->data);
        current = current->next;
    }
}

int main() {
    int a, n;
    if(!(scanf("%d", &n))) return 0;

    struct Node* head = NULL, *current = NULL;

    le(i, n) {
        if(!(scanf("%d", &a))) return 0;
        struct Node* newnode = get_new_node(a);
        if (!i) {
            head = newnode;
            current = head;
        }
        else {
            current->next = newnode;
            current = current->next;
        }
    }

    struct Node* reverse_linked_list_head = reverse_linked_list(head);
    transverse(reverse_linked_list_head);
    return 0;
}