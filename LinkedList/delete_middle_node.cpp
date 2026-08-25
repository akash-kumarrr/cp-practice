#include <bits/stdc++.h>

#define le(i, e) for (int i=0; i<e; i++)
#define lse(i, s, e) for (int i=s; i<e; i++)
#define pb push_back

using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int value){
        data = value;
        next = nullptr;
    }
};

Node* array_to_ll(int* arr, int size){
    if (size < 2) return new Node(*arr);
    Node* head = new Node(*arr);
    Node* current = head;
    lse(i, 1, size){
        Node* newnode = new Node(*(arr+i));
        current->next = newnode;
        current = current->next;
    }
    return head;
}

void trans(Node* head){
    Node* current = head;
    while(current!=nullptr){
        cout << current->data << " ";
        current = current->next;
    }
}

int main(){
    int a, b, x=0, n;
    if(!(cin >> n)) return 0;
    int arr[n];
    le(i, n) cin >> *(arr+i);

    Node* head = array_to_ll(arr, n);

    Node* current = head;

    while(current != nullptr) {current = current->next; x++;}
    current = head;
    le(i, (int) ((x-1)/2)) current = current->next;
    current->next = current->next->next;
    
    trans(head);
}