#include <bits/stdc++.h>

#define lp(i, s, e) for (int i=s; i<e; i++)

struct Node{
    int data;
    Node* next;

    Node(int value ) {
        data = value;
        next = nullptr;
    }
};

using namespace std;

void transverse(Node* head) {
    Node* current = head;
    while(current) {
        cout << current->data << " ";
        current = current->next;
    }
}

Node* add_two_number(Node* head1, Node* head2) { 
    Node* current1 = head1;
    Node* current2 = head2;
    int carry = 0;
    while(current1 || current2) {
        if (!current1) {
            current1->next = new Node(0);
            current1 = current1->next;
        }

        if (current2) {
            if (!current2) {
                current2->next = new Node(0);
                current2 = current2->next;
            }
        }
    }

    Node* output_head = nullptr;
    Node* output_current = output_head;

    current1 = head1, current2=head2;
    while(current1 && current2) {
        int node_data = current1->data + current1->data + carry;
        int ones_place  = node_data % 10;
        carry = node_data/10;
        if (current1 == head1 && current2 == head2) {
            output_head = new Node(ones_place);
            output_current = output_head;
        }
        else {
            output_current->next = new Node(ones_place);
        }
        output_current = output_current->next;
    }
    return output_head;
}

int main() {
    int a, n1, n2;

    Node* head1 = nullptr, *head2 = nullptr;
    Node* current = head1;

    if(!(cin >> n1)) cin >> n1;
    cout << "first linked list: ";
    lp(i,0, n1) {
        cin >> a;
        if (!i) {
            head1 = new Node(a);
            current = head1;
        }
        else {
            Node *new_node = new Node(a);
            current->next = new_node;
        }
        current = current->next;
    }

    cout << "second linked list: ";
    if(!(cin >> n2)) return 0;
    lp(i,0, n2) {
        cin >> a;
        if (!i) {
            head2 = new Node(a);
            current = head2;
        }
        else {
            Node *new_node = new Node(a);
            current->next = new_node;
        }
        current = current->next;
    }

    transverse(add_two_number(head1, head2));
    return 0;
}