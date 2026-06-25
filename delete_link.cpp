#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;

    Node(int x) {
        val = x;
        next = NULL;
    }
};

void deleteNode(Node* node) {
    Node* temp = node->next;

    node->val = temp->val;
    node->next = temp->next;

    delete temp;
}

void printList(Node* head) {
    while (head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {

    // Creating Linked List: 4 -> 5 -> 1 -> 9
    Node* head = new Node(4);
    head->next = new Node(5);
    head->next->next = new Node(1);
    head->next->next->next = new Node(9);

    cout << "Before Deletion: ";
    printList(head);

    // Delete node having value 5
    deleteNode(head->next);

    cout << "After Deletion: ";
    printList(head);

    return 0;
}