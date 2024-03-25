// Write a C++ program to insert a new node at the end of a Singly Linked
// List [Consider all edge cases].

#include <iostream>
using namespace std;

struct node{
            int data;
            node* next;
            node(int x){
                  data = x;
                  next = NULL;
            }
};

void insert_at_end(node* *head,int new_d){

        node* new_node = new node(new_d);
        if(*head == NULL){
            *head = new_node;

      }


    else{
         node* last = *head;
    while (last->next != NULL) {
        last = last->next;
    }
    last->next = new_node;
    }
}

void traverselist(node* node) {
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
}


int main() {
    node* head = NULL;

    insert_at_end(&head, 40);
    insert_at_end(&head, 41);
    insert_at_end(&head, 43);
    insert_at_end(&head, 45);

    cout << "Linked list: ";
    traverselist(head);

    return 0;
}
