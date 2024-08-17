#include <bits/stdc++.h>
using namespace std;

class Node {
    public :
        int data;
        Node * next;
        
        Node(int data , Node * next) {
            this->data = data;
            this->next = next;
        }

        Node(int data) {
            this->data = data;
            this->next = nullptr;
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

// Node * insertionAtHead(Node * head , Node * val){
//     Node * temp = val;
//     temp->next = head;

//     return temp;
// }

Node * InsertionAtKthPosition(Node * head , int k , int val) {
    if(head == nullptr) {
        return new Node(val);
    }
    if(k == 1) {
        Node * NewHead = new Node(val);
        NewHead->next = head;
        return NewHead;
    }
    
    int count = 1;
    Node * prev = NULL;
    Node * curr = head;
    while(curr != nullptr && count < k-1) {
        count++;
        curr = curr->next;
    }
    if(curr == nullptr) {
        curr->next = new Node(val);
    }
    else {
        Node * newNode = new Node(val);
        newNode->next = curr->next;
        curr->next = newNode;
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
    int val = 100;
    root = InsertionAtKthPosition(root , 3 , val); 
    cout << "revised array : " << endl;
    printLinkedList(root);
    return 0;
}