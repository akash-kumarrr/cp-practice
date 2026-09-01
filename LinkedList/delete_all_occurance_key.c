#include "stdlib.h"
#include "stdio.h"

#define le(i, e) for (int i=0; i<e; i++)

struct Node{
    int data;
    struct Node* next;
    struct Node* prev;
};

struct Node* get_new_node(int value){
    struct Node* newnode = (struct Node*) malloc (sizeof(struct Node));
    newnode->data = value;
    newnode->next = NULL;
    newnode->prev = NULL;

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

struct Node* remove_occurances(struct Node* head, int key) {
    if(!head) return 0;

    struct Node* current = head;
    struct Node* temp;

    while(current) {
        if(current->data == key) {
            temp = current;
            if (current->prev && current->next) {
                current->prev->next = current->next;
                current->next->prev = current->prev;
            }

            else if (current->next && !(current->prev)){
                head = current->next;
            }

            else if (!(current->next) && (current->prev)) {
                current->prev->next = NULL;
            }
            free(temp);
        } 
        
        current = current->next;
    }
    return head;
}

int main() {
    int a, n;
    if(!(scanf("%d", &n))) return 0;

    struct Node* head = NULL, *current = NULL;

    le(i, n) {
        if(!(scanf("%d", &a))) return 0;
        struct Node* newnode = get_new_node(a);
        if(!i) {
            head = newnode;
            current = head;
        }
        else {
            current->next = newnode;
            newnode->prev = current;
            current = current->next;
        }
    }

    printf("enter key to remove form linked list : ");
    if (!(scanf("%d", &a))) return 0;

    transverse(remove_occurances(head, a));
    return 0;
}