#include <iostream>
using namespace std;

class Node {
public:
    int d;
    Node* next;
    Node(int d) : d(d), next(nullptr) {}
    ~Node(){
        int value = this->d;
        if (this->next!= nullptr)
        {
            delete next;
            this->next = nullptr;
        }
        
    }

};

void insertHead(Node* &head, int d) {
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertTail(Node* &tail,int d){
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void print(Node* head) {  // Pass by value
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->d << " ";
        temp = temp->next;
    }
    cout << endl;  // Add newline for clarity
}

int main() {
    Node* node1 = new Node(2);
    Node* head = node1;
    Node* tail = node1;
    print(head);         // Output: 2
    
    insertHead(head, 12);
    print(head);         // Output: 12 2

    insertHead(head,11);
    print(head);

    insertTail(tail,0);
    print(head);
    
    return 0;
}