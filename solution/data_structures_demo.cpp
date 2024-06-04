#include <iostream>

using namespace std;

// Node structure for the linked list
struct Node {
    int data;
    Node* next;
};

// Function to add a node at the beginning of the list
void push(Node** head_ref, int new_data) {
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

// Function to delete a node with a given key
void deleteNode(Node** head_ref, int key) {
    Node* temp = *head_ref;
    Node* prev = nullptr;

    // If the head node itself holds the key to be deleted
    if (temp != nullptr && temp->data == key) {
        *head_ref = temp->next;
        delete temp;
        return;
    }

    // Search for the key to be deleted
    while (temp != nullptr && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }

    // If the key was not present in the list
    if (temp == nullptr) return;

    // Unlink the node from the linked list
    prev->next = temp->next;
    delete temp;
}

// Function to print the linked list
void printList(Node* node) {
    while (node != nullptr) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;

    // Add elements to the list
    push(&head, 1);
    push(&head, 2);
    push(&head, 3);
    push(&head, 4);

    cout << "Linked list: ";
    printList(head);

    // Delete a node
    deleteNode(&head, 3);
    cout << "Linked list after deletion of 3: ";
    printList(head);

    return 0;
}
