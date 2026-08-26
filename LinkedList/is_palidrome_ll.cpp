#include <bits/stdc++.h>

using namespace std;

#define lse(i, s, e) for (int i=s; i<e; i++)
#define le(i, e) for (int i=0; i<e; i++)

typedef vector<int> vi;

struct Node{
    int data;
    Node* next;

    Node(int value){
        data = value;
        next = nullptr;
    }
};

bool isLLPalidrome(Node* head){
    Node* current = head;
    stack<Node*> st;
    while(current != nullptr) {
        st.push(current);
        current = current->next;
    }
    current = head;
    while(current != nullptr) {
        if (current->data != st.top()->data) return false;
        st.pop();
        current = current->next;
    }
    return true;
}

int main(){
    int a, n;
    if(!(cin >> n) || !n) return 0;
    Node* head = nullptr, *current=nullptr;
    le(i, n) {
        cin >> a;
        if (!i) {
            head = new Node(a);
            current= head;
        }
        else {   
            Node* newnode = new Node(a);
            current->next = newnode;
            current = current->next;
        }
    }

    cout << (isLLPalidrome(head) ? "palidrome" : "not palidrome") << endl;
    return 0;   
}