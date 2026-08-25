#include <bits/stdc++.h>

using namespace std;

#define le(i, e) for (int i=0; i<e; i++)
#define lse(i, s, e) for (int i=0; i<e; i++)

typedef vector<int> vi;

struct Node {
    int data;
    Node* next;

    Node(int value){
        data = value;
        next = nullptr;
    }
};

void trans(Node* head) {
    Node* current = head;
    while(current != nullptr) {
        cout << current->data << endl;
        current = current->next;
    }
}
int main(){
    int a, n;
    
    if(!(cin >> n)) return 0; 

    Node* head = nullptr;
    Node* prev = nullptr; 

    le(i, n){
        cin >> a;
        Node* current = new Node(a);
        if (i==0){
            head = current;
            prev = head;
        }
        else {
            prev->next = current;
            prev = current;
        }
    }

    std::stack<Node*> s;
    Node* current = head;
    
    while(current->next != nullptr) {
        s.push(current);
        current = current->next;
    }

    head = current;

    while(!(s.empty())){
        current->next = s.top();
        s.pop();
        current = current->next;
    }
    
    current->next = nullptr; 

    trans(head);
    
    return 0;
}