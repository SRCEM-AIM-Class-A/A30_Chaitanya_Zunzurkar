#include <bits/stdc++.h>
using namespace std;

class Node {
    public :
    int data;
    Node * next;

    Node(int value , Node * next1) {
        data =value;
        next = next1;
    }

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

void printLinkedList(Node* root) {
   while (root != NULL) {
      cout << root->data << " ";
      root = root->next;
   }
   cout << endl;
}

Node * arrayToLL(const vector<int> &arr) {
    Node * head = new Node(arr[0]);
    Node * mover = head;

    for(int i = 1; i < arr.size(); i++) {
        Node * temp = new Node(arr[i]);
        mover -> next = temp;
        mover = temp;
    }
    return head;
}

// Node * DeletionOfHead(Node * head) {
//     if(head == nullptr) return nullptr;
//     Node * temp = head;
//     head = head -> next;
//     delete temp;
//     return head;
// }

// Node * DeletionOfTail(Node * head) {
//     if(head == nullptr || head -> next == nullptr) {
//         return nullptr;
//     }

//     Node * temp = head;
//     while(temp->next->next != NULL) {
//         temp = temp->next;
//     }

//     delete temp->next;
//     temp -> next = nullptr;

//     return temp;
// }

Node * DeleteionOfTheKthElement(Node * head , int k) {
    if(head == nullptr) return nullptr;
    if(k == 1) {
        Node * temp = head;
        head = head -> next;
        delete temp;
        return head;
    } 

    int count = 1;
    Node * temp = head;
    Node * prev = nullptr;
    while(temp != nullptr && count < k) {
        count++;
        if(k == count) {
            prev->next = temp->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp -> next;
    }
    return head;
}

int main()
{
    vector<int> arr = {12 ,23 ,34 ,45, 56 ,78, 90};
    Node * root = arrayToLL(arr);
    cout << "Original Linkedlist : " << endl;
    printLinkedList(root);
    
    cout << endl;

    // root = DeletionOfHead(root);
    // cout << "Now , the head of the linkedlist is " << root -> data << endl;
    // cout << "Reivised Linkedlist : " << endl;
    // printLinkedList(root);

    // cout << endl;

    // root = DeletionOfTail(root);
    // cout << "Now , the tail of the linkedlist is " << root -> data << endl;
    // cout << "Reivised Linkedlist : " << endl;
    // printLinkedList(root);
    root = DeleteionOfTheKthElement(root , 2);
    printLinkedList(root);
    return 0;
}