#include <bits/stdc++.h>

using namespace std;

#define le(i, e) for (int i=0; i<e; i++)

struct Node {
    int data;
    Node* next;

    Node (int value) {
        next = nullptr;
        data = value;
    }
};

Node* sort012(Node* head) {
    Node *h0=nullptr, *h2=nullptr, *h1=nullptr;
    Node *ch0, *ch1, *ch2;

    Node* current = head;

    while(current != nullptr) {
        if (current->data == 0) {
            if (h0==nullptr) {
                h0 = new Node(current->data);
                ch0 = h0;
            }
            else {
                Node* newnode = new Node(current->data);
                ch0->next = newnode;
                ch0 = ch0->next;
            }
        }
        else if (current->data == 1) {
            if (h1==nullptr) {
                h1 = new Node(current->data);
                ch1 = h1;
            }
            else {
                Node* newnode = new Node(current->data);
                ch1->next = newnode;
                ch1 = ch1->next;
            }
        }
        else if (current->data == 2) {
            if (h2==nullptr) {
                h2 = new Node(current->data);
                ch2 = h2;
            }
            else {
                Node* newnode = new Node(current->data);
                ch2->next = newnode;
                ch2 = ch2->next;
            }
        }
        current = current->next;
    }
    if (ch0) ch0->next = h1 ? h1 : h2;
    if (ch1) ch1->next = h2 ? h2 : nullptr;
    if (ch2) ch2->next = nullptr;
    return h0 ? h0 : (h1 ? h1 : (h2 ? h2 : nullptr));
}

int main(){
    int a, n;

    if(!(cin >> n) || !n) return 0;

    Node* head, *current=head;
    le(i, n) {
        cin >> a;
        if (!i) {
            head = new Node(a);
            current = head;
        }
        else {
            Node* newnode = new Node(a);
            current->next = newnode;
        }
        current = current->next;
    }
    
}