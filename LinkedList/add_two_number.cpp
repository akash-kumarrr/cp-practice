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

    Node* output_head = nullptr;
    Node* output_current = nullptr;

    int carry = 0;

    while (current1 || current2 || carry) {
        int digit1 = current1 ? current1->data : 0;
        int digit2 = current2 ? current2->data : 0;

        int sum = digit1 + digit2 + carry;

        int ones_place = sum % 10;
        carry = sum / 10;

        Node* new_node = new Node(ones_place);

        if (!output_head) {
            output_head = new_node;
            output_current = output_head;
        } else {
            output_current->next = new_node;
            output_current = output_current->next;
        }

        if (current1) current1 = current1->next;

        if (current2) current2 = current2->next;
    }

    return output_head;
}

int main() {
    int a, n1, n2;
    cout << "enter size of first linked list : ";
    cin >> n1;
    Node* head1 = nullptr, *head2 = nullptr, *current1 = nullptr, *current2 = nullptr;

    lp(i, 0, n1) {
        if (!(cin >> a)) return 0;
        Node* newnode = new Node(a);
        if (!i) {
            head1 = newnode;
            current1 = head1;
        }
        else {
            current1->next = newnode;
            current1 = current1->next;
        }
    }

    cout << "enter size of second linked list : ";
    cin >> n2;

    lp(i, 0, n2) {
        if(!(cin >> a)) return 0;
        Node* newnode = new Node(a);
        if (!i) {
            head2 = newnode;
            current2 = head2;
        }
        else {
            current2->next = newnode;
            current2 = current2->next;
        }
    }

    Node* output_head = add_two_number(head1, head2);
    transverse(output_head);
    return 0;
}