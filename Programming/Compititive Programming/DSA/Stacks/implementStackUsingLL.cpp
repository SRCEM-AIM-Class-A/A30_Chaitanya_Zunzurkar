#include <iostream>
#include <vector>
using namespace std;

class Node {
public:
    int val;
    Node *next;

    Node(int val, Node *next = nullptr) {
        this->val = val;
        this->next = next;
    }
};

Node *arrToLL(const vector<int> &arr) {
    if (arr.empty()) {
        return nullptr;
    }

    Node *head = new Node(arr[0]);
    Node *mover = head;

    for (int i = 1; i < arr.size(); i++) {
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

class Stack {
    Node *top;

public:
    Stack() {
        top = nullptr;
    }

    bool isEmpty() {
        return (top == nullptr);
    }

    Node *push(int val) {
        Node *newNode = new Node(val);
        if (top == nullptr) {
            top = newNode;
        } else {
            Node *  temp = newNode;
            temp->next = top;
            top = newNode;
        }
        return top;
    }

    Node *pop() {
        if (isEmpty()) {
            cout << "Stack Underflow" << endl;
            return nullptr;
        } else {
            Node *temp = top;
            top = top->next;
            delete temp;
            return top;
        }
    }
};

void printLL(Node *head) {
    Node *temp = head;
    while (temp != nullptr) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    vector<int> arr;

    Stack s;
    Node *root = arrToLL(arr);
    printLL(root);
    cout << endl;

    root = s.push(5);
    printLL(root);
    cout << endl;
    
    root = s.push(10);
    printLL(root);
    cout << endl;
    
    root = s.push(51);
    printLL(root);
    cout << endl;

    root = s.pop();
    printLL(root);
    cout << endl;

    return 0;
}
