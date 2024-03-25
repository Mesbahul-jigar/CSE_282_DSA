// Write a C++ program to find the length of a singly linked list.

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

int getlen(node* head){
     int len = 1;
     node* current = head;
     while( current->next != NULL){
      len++;
      current = current->next;
     }
     return len;
}

void insert_at_end(node* *head,int new_d){

        node* new_node = new node(new_d);
        if(*head == NULL){
            *head = new_node;
            return;

      }



         node* last = *head;
    while (last->next != NULL) {
        last = last->next;
    }
    last->next = new_node;

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
    int len = getlen(head);
    cout << "length of link list " << len;


    return 0;
}
