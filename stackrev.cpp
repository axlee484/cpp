#include<iostream>
using namespace std;

struct node {
    int value;
    node* next;
    node(int value) : value(value) {}
};

class Stack {
    node* top;
public:
    Stack() {
        top = nullptr;
    }
    Stack(int value) {
        top = nullptr;
        push(value);
    }

    void push(int value) {
        if (top == nullptr) {
            node* element = new node(value);
            element->next = nullptr;
            top = element;
            return;
        }
        node* element = new node(value);
        node* oldtop = top;
        top = element;
        element->next = oldtop;
    }
    void pop() {
        node* oldtop = top;
        top = top->next;
        delete oldtop;
    }
    void trace() {
        node* ptr = top;
        while (ptr != nullptr) {
            cout << ptr->value << " ";
            ptr = ptr->next;
        }
        cout << endl;
    }
    void reverse() {
        node* oldtop = top;
        reverseH(top);
        oldtop->next = nullptr;
    }
    node* reverseH(node* current) {
        if (current->next == nullptr) {
            top = current;
            return current;
        }
        reverseH(current->next)->next = current;
        return current;
    }
    int topo() { return top->value; }

};

int main() {
    Stack stack;
    stack.push(5);
    stack.push(8);
    stack.push(8);
    stack.push(-1);
    stack.trace();
    cout << stack.topo() << endl;
    stack.reverse();
    stack.trace();
    cout << stack.topo();


}