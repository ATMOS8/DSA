#include <iostream>
struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};
bool detectLoop(Node* head) {
    if (head == nullptr || head->next == nullptr)
        return false;
    Node* slow = head;
    Node* fast = head;
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;         
        fast = fast->next->next;    
        if (slow == fast) {
            return true;  
        }
    }
    return false; 
}
Node* createLinkedList(int n, int loopPosition) {
    if (n == 0) return nullptr;
    Node* head = nullptr;
    Node* tail = nullptr;
    Node* loopNode = nullptr;
    for (int i = 1; i <= n; ++i) {
        int value;
        std::cout << "Enter value for node " << i << ": ";
        std::cin >> value;
        Node* newNode = new Node(value);
        if (i == 1) {
            head = newNode;
        } else {
            tail->next = newNode;
        }
        tail = newNode;
        if (i == loopPosition) {
            loopNode = newNode;
        }
    }
    if (loopPosition > 0 && loopNode != nullptr) {
        tail->next = loopNode; 
    }
    return head;
}
int main() {
    int n, loopPosition;
    std::cout << "Enter the number of nodes in the linked list: ";
    std::cin >> n;
    std::cout << "Enter the position (1-based index) where the loop starts (0 for no loop): ";
    std::cin >> loopPosition;
    Node* head = createLinkedList(n, loopPosition);
    if (detectLoop(head)) {
        std::cout << "Loop detected in the linked list." << std::endl;
    } else {
        std::cout << "No loop detected in the linked list." << std::endl;
    }
    return 0;
}