#include <iostream>

//Linked List
struct Node {
    int data;
    struct Node *next;
};

//Doubly List
struct DoublyNode {
    int data;
    struct node *prev;
    struct node *next;
};



void printnode (struct Node* head) {
    while (head != NULL) {
        std::cout << head->data << '\t';
        head = head->next;
    }
    std::cout << std::endl;
}

int main () {

    struct Node* head = new Node();
    struct Node* curr;
    curr = head;
    for (int i = 1; i < 10; i++) {
        curr->data = i;
        curr->next = new Node();
        curr = curr->next;
    }
    curr->data = 10;
    curr->next = NULL;

    printnode (head);

}
