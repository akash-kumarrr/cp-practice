#include <bits/stdc++.h>
using namespace std;
#define le(i, e) for (int i=0;i <e; i++)

struct Node{
    int data;
    Node* next;
    Node(int value) {
        data = value;
        next = nullptr;
    }
};

typedef unordered_map<Node*, int> mni;

Node* intersection_point(Node* head1, Node* head2) {
    mni m;
    Node* current = head1;
    while(current) {
        m[current] = current->data;
        current = current->next;
    }
    current = head2;
    while(current) {
        if(m.count(current)) return current;
        m[current] = current->data;
        current = current->next;
    }
    return nullptr;
}

int main(){
    int a, b, n; 
    if (!(cin >> n ) || !n) return 0;
    Node *head = nullptr, *current = head;
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