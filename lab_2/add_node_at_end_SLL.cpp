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
 void aatend(node *head, int n){
    node* lastnode = new node(n);
    node* temp = head;
    while(temp->next!=NULL)
    temp= temp->next;
    
    temp->next= lastnode;
}

int main() {
   int a[] = {40,41,42,43};
   int newvalue; cin >> newvalue;
   node* head = consLL(a,4);
  
   aatend(head,newvalue);
  traverseSLL(head);
    
    return 0;
}