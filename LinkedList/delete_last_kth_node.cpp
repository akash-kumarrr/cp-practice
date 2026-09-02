#include <bits/stdc++.h>

#define lse(i, s, e) for (int i=s; i<e;i++)

using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int value) {
        data = value;
        next = nullptr;
    }
};

void transverse(Node* head){
    Node* current = head;
    while(current){
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

Node* remove_last_k(Node* head, int k){
    Node* current = head, *temp = head;
    lse(i, 0, k) current = current->next;
    while(current->next) {
        current = current->next;
        temp = temp->next;
    }
    if(!current) return head->next;
    temp->next = temp->next->next;
    return head;
}

int main() {
    int a, n;
    if(!(cin >> n)) return 0;
    Node *head=nullptr, *current=nullptr;
    lse(i, 0, n) {
        if(!(cin >> a)) return 0;
        Node* newnode = new Node(a);
        if (!i) {
            head = newnode;
            current = head;
        }

        else {
            current->next = newnode;
            current = current->next;
        }
    }
    int k;
    if(!(cin >> k)) return 0;
    transverse(remove_last_k(head, k));
    return 0;
}