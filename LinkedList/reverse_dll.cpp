#include <bits/stdc++.h>

using namespace std;

#define lp(i, e) for (int i=0; i<e; i++)

typedef vector<int> vi;

struct Node {
    int data;
    Node* next;
    Node* prev;

    Node(int value) {
        data = value;
        prev = nullptr;
        next = nullptr;
    }
};

bool is_dll_palidrome(Node *head) {
    stack<Node*> s;
    Node *current = head ;
    
    while(current != nullptr) {
        s.push(current);
        current = current->next;
    }

    current = head;

    while(!s.empty()) {
        if (current->data != s.top()->data) return false;
        s.pop();
        current = current->next;
    }
    return true;
}

int main(){

}