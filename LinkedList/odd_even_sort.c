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

void transverse(struct Node* head) {
    struct Node* current = head;
    while(current) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

struct Node* sort_even_odd(struct Node* head) {
    struct Node* current = head;
    struct Node* head_even = NULL, *head_odd = NULL, *current_odd = NULL, *current_even = NULL;
    while(current) {
        if (current->data % 2 == 0){
            if (!head_even) {
                head_even = get_new_node(current->data);
                current_even = head_even;
            }
            else {
                current_even->next = get_new_node(current->data);
                current_even = current_even->next;
            }
        }
        else {
            if (!head_odd) {
                head_odd = get_new_node(current->data);
                current_odd = head_odd;
            }
            else {
                current_odd->next = get_new_node(current->data);
                current_odd = current_odd->next;
            }
        }
        current = current->next;
    }

    current = head_even;
    while(current && current->next) current = current->next;
    if (current) current->next = head_odd;
    else head_even = head_odd;
    return head_even;
}

int main() {
    int a, n;
    scanf("%d", &n);

    struct Node *head = NULL, *current = head;
    le(i, n) {
        scanf("%d", &a);
        struct Node* newnode = get_new_node(a);
        if(!i) {
            head = newnode;
            current = head;
        }
        else {
            current->next = newnode;
            current = current->next;
        }
    }
    printf("input taken");

    transverse(sort_even_odd(head));
    return 0;
}