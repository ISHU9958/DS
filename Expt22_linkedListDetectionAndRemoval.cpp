#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* findCycleStart(Node* head) {
    Node* slow = head;
    Node* fast = head;

    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) {
            break;
        }
    }

    if (fast == nullptr || fast->next == nullptr) {
        return nullptr; // No cycle
    }

    slow = head;
    while (slow != fast) {
        slow = slow->next;
        fast = fast->next;
    }

    return slow;
}

void removeCycle(Node* head, Node* cycleStart) {
    Node* current = head;
    while (current->next != cycleStart->next) {
        current = current->next;
        cycleStart = cycleStart->next;
    }
    cycleStart->next = nullptr;
}

void displayList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

int main() {
    Node* head = new Node{1, nullptr};
    Node* cycleStart = new Node{2, nullptr};
    head->next = cycleStart;
    Node* cycleEnd = new Node{3, cycleStart};
    cycleStart->next = cycleEnd;
    Node* nonCycleNode = new Node{4, cycleEnd};
    nonCycleNode->next = new Node{5, nullptr};

    cout << "Linked List with Cycle:" << endl;
    displayList(head);

    Node* cycleEntryPoint = findCycleStart(head);

    if (cycleEntryPoint != nullptr) {
        cout << "Cycle Detected. Removing cycle." << endl;
        removeCycle(head, cycleEntryPoint);
    } else {
        cout << "No cycle detected." << endl;
    }

    cout << "Linked List after removing the cycle:" << endl;
    displayList(head);

    delete head;
    delete cycleStart;
    delete cycleEnd;
    delete nonCycleNode;

    return 0;
}
