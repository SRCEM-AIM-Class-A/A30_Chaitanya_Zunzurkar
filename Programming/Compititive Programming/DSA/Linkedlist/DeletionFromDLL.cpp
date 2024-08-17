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

// void printLinkedList(Node * head)  {
//     Node* current = head;

//     while (current != nullptr && current->next != nullptr) {
//         current = current->next;
//     }

//     while (current != nullptr) {
//         cout << current->val << " ";
//         current = current->prev;
//     }
//     cout << endl;
// }

void printLinkedList(Node* root) {
   while (root != NULL) {
      cout << root->val << " ";
      root = root->next;
   }
   cout << endl;
}

Node * DeletionAtHeadOfDLL(Node * head) {
    if(head == NULL) {
        return NULL;
    }
    Node * temp = head;
    head = head->next;
    head->prev = nullptr;
    temp->next = nullptr;

    delete temp;
    return head;
}

Node * DeletionAtTailOfDLL(Node * head) {
    if(head == NULL) {
        return NULL;
    }

    Node * curr = head;
    while (curr != NULL){
        curr = curr->next;
    }
    
    curr = curr->prev;
    curr->next = nullptr;
    delete curr->next;
    return head;
}

int main()
{
    vector<int> arr = {12 ,23 ,34 ,45, 56 ,78, 90};
    Node * root = ArrToDLL(arr);
    cout << "Original Array : " << endl;
    printLinkedList(root);

    cout << endl;

    // root = DeletionAtHeadOfDLL(root);
    // cout << "Array after deletion of the head : " << endl;
    // printLinkedList(root);

    root = DeletionAtTailOfDLL(root);
    cout << "Array after deletion of the tail : " << endl;
    printLinkedList(root);

    return 0;
}