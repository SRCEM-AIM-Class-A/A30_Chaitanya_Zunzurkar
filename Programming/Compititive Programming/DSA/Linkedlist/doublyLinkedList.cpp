#include <bits/stdc++.h>
using namespace std;

class Node {
    public :
        int val;
        Node * next;
        Node * prev;
        
        Node(int val , Node * next , Node * prev) {
            this->val = val;
            this->next = next;
            this->prev = prev;
        }

        Node(int val) {
            this->val = val;
            this->next = nullptr;
            this->prev = nullptr;
        }
};

Node * ArrToDLL(const vector<int> &arr) {
    Node * head = new Node(arr[0]);
    Node * mover = head;

    for(int i = 1; i < arr.size(); i++) {
        Node * temp = new Node(arr[i]);
        mover->next = temp;
        temp->prev = mover;
        mover = temp;
    }
    return head;
}

void printLinkedList(Node * head)  {
    Node* current = head;

    while (current != nullptr && current->next != nullptr) {
        current = current->next;
    }

    while (current != nullptr) {
        cout << current->val << " ";
        current = current->prev;
    }
    cout << endl;
}

int main()
{
    vector<int> arr = {12 ,23 ,34 ,45, 56 ,78, 90};
    Node * root = ArrToDoLL(arr);
    printLinkedList(root);
    return 0;
}