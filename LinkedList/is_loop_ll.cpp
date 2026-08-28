#include <bits/stdc++.h>

using namespace std;

#define le(i, e) for (int i=0; i<e; i++)

struct Node {
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

unordered_map<Node*, bool> m;

bool is_loop(Node* head) {
    Node* current = head;
    while(current) {
        if (m.count(current)) return true;
        current = current->next;
    }
}

int main(){
    int a, b, n;
    if (!(cin >> n) || n<1) return 0;

    Node *head=nullptr, *current;

    le(i, n){
        cin >> a;
        if (!i) {
            head = new Node(a);
            current = head;
        }
        else{
            Node* newnode = new Node(a);
            current->next = newnode;
        }
        current = current->next;
    }

    cout << is_loop(head) ? "loop" : "no loop";
    return 0; 
}