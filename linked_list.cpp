#include <iostream>

struct Node{ // default to be public
    int data;
    Node* next;
};// a node contains a data and a pointer points to the next node

void print_list(Node* n){
    while( n != NULL ){
        std::cout << n->data << "->";
        n = n->next;
    }
}

void print_current(Node* n){
        std::cout << "Current Node Value: " <<  n->data << std::endl;
}

int main(){
    // Node pointers
    Node* n; // stores the memory location of each new node created
    Node* t; // temporary
    Node* head; // head

    n = new Node; // n points to a newly created node
    n -> data = 1; // (*n).data = 1; // it has to dereference n pointer first, and assign a value to n
    t = n;
    head = n;
    
    n = new Node;
    n -> data = 2;
    t -> next = n;
    t = t -> next;

    n = new Node;
    n -> data = 3;
    t -> next = n;

    n = new Node;
    t = t-> next;
    n -> data = 4;
    t -> next = n;
    
    n -> next = NULL;

    print_list(head);
    std::cout << std::endl;
    print_current(n);
    return 0;
}