#include <bits/stdc++.h>

using namespace std;

#define le (i, e) for (int i=0; i<e; i++)

struct Node {
    int data; 
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

Node* remove_nth_from_end(Node* head, int n) {
    Node* current = head;
    std::stack<Node*> s;
    while(current) {
        s.push(current);
        current = current->next;
    }

    for (int i=0; i<n; i++)
}


int main() {
    int a, b, n;

    if(!(cin >> n)) return 0;

    Node* head = nullptr, *current = head;

    for(int i=0; i<n; i++) {
        cin >> a;

        if (!a) {
            head = new Node(a);
            current = head;
        }
        else {
            Node* newnode = new Node(a);
            current->next = newnode;
            current = current->next;
        }
    }

    
}