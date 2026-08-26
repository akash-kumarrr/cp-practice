#include <bits/stdc++.h>

using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
        prev=  nullptr;
    }
};

bool is_palidrome(Node* head) {
    if (head == nullptr || head->next == nullptr) return true;
    Node* left=head, *right=head;
    while(right->next != nullptr) right = right->next;

    while(left != right && left->prev == right) {
        if (left->data != right->data) return false;
        left = left->next;
        right = right->prev;
    }
    return true;
}

int main(){

}