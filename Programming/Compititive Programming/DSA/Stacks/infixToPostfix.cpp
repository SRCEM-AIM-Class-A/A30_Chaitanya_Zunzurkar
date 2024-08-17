#include <bits/stdc++.h>
using namespace std;

class Stack {
    int top = -1;
    const int size = 5;
    int arr[5];

public :
    void push(char val);
    int pop();
    bool isEmpty();
    bool isFull();
    int getTop();
    void display(int n);
    string infixToPostfix(string infixExp);
};

int main()
{    
    Stack s;
    cout << s.infixToPostfix("a+b*c-d/e") << endl;
    return 0;
}

void Stack :: display(int n) {
    if(isEmpty()) {
        cout << "Stack is empty." << endl;
    }
    else {
        for(int i = 0; i < top; i++) {
            cout << arr[i] << "\t";
        }
    }
    cout << endl;
}

void Stack::push(char val) {
    if(isFull()) {
        cout << "Stack Overflow." << endl;
    }
    else {
        top = top + 1;
        arr[top] = val;
    }
}

int Stack::pop() {
    if(isEmpty()) {
        cout << "Stack underflow" << endl;
    }
    else {
        int popedElement = arr[top];
        top = top - 1;
        return popedElement;
    }
    return -1;
}

bool Stack::isEmpty() {
    return top == -1;
}

bool Stack::isFull() {
    return top == size - 1;
}

int Stack::getTop() {
    if(isEmpty()) return 0;
    return arr[top];
}

bool isOperator(char op) {
    if(op == '+' || op == '-' || op == '*' || op == '/') {
        return true;
    }
    return false;
}

int precedence(char op) {
    if(op == '+' || op == '-') {
        return 1;
    }
    else if (op == '*' || op == '/') {
        return 2;
    }
    else if(op == '^') {
        return 3;
    }
    return 0;
}

string Stack::infixToPostfix(string infixExp) {
    string postfixExp;
    
    for(char ch : infixExp) {
        if(!isOperator(ch)) {
            postfixExp += ch;
        }
        else {            
            while (!isEmpty() && precedence(ch) <= precedence(getTop())) {
                postfixExp += pop();
            }
            push(ch);
        }

        else if (ch == '(') {
            push('(');
        }

        else if (ch == ')') {
            while (getTop() != '(') {
                postfixExp += pop();
            }
        }
    }

    while(!isEmpty()) {
        postfixExp += pop();
    }
    
    return postfixExp;
}
