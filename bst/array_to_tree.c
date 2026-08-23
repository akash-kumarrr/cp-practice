#include "stdio.h"
#include "stdlib.h"

struct Node {int data, struct Node* left, struct Node* right};

struct Node* getNewNode(int value) {
	struct Node* node = (struct Node*) malloc (sizeof(struct Node));
	node->left = NULL;
	node->right = NULL;
}

void insertNode(int value, struct Node* head){
	if (!head) return ;
	if (head->data == NULL) head->data = value;
	struct Node* current = head;
	while(1) {
		if (value < current->data){
			if (current->left == NULL){
				current->left = getNewNode(value);
				return;
			}
			current = current->left;
		}
		else {
			if (current->right == NULL){
				current->right = getNewNode(value);
				return;
			}
			current = current->right;
		}
	}
}

void search(int value, struct Node* head){
	if (!head) return;
	struct Node* current = head;
	while(current != NULL && current->data != value){
		if (current->data > value) current = current->left;
		else current = current->right;
	}
}


struct Node* array_to_bst(int* arr_head, int arr_size){
	struct Node* head = NULL;
	for(int i=0; i<arr_size; i++){
		insertNode(*(arr_head+i), &head);
	}
	return head;
}

int main(){
	
}
