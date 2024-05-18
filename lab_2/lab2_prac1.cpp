// Write a C++ program to insert a new node at the end of a Singly Linked
// List [Consider all edge cases].

#include <iostream>

using namespace std;

struct node{
    int data;
    node *next;
    node(int x){
        data = x;
        next = NULL;
    }
};

node* consLL(int a[] , int a_size){
    
    node *head = new node(a[0]);
    node *current = head;
    for(int i = 1 ; i < a_size ;i++){
        node *temp = new node(a[i]);
        current->next = temp;
        current = temp;
    }
  return head;  
}
void traverseSLL(node *head){
    node *a = head;
    while(a != NULL){
        cout << a->data <<" ";
        a = a->next;
    }
}
 void insert_at_end(node *head, int n){
    node* lastnode = new node(n);
    node* temp = head;
    if(temp == NULL) head = lastnode;
    else{
    while(temp->next!=NULL)
    temp= temp->next;
    
    temp->next= lastnode;}
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
