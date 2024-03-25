 //Write a C++ program to find the height of the following tree
  //          _50_         //
   //    _17_        _72_   //
   // _12_   23_   54_   76//
   //9    14    19    67     //


#include<iostream>
using namespace std;
struct node{
      int data;
      node *left;
      node *right;
      node(int x){
         data = x;
         left = right = NULL;
      }
   };

   int max_depth(node* root){
         if(root == NULL){
            return 0;
         }
         else{
            int lh = 1 + max_depth(root->left);
            int rh = 1 + max_depth(root->right);
            return max(lh,rh);
   }
}

   int main(){


   node* root = new node(50);
   root->left = new node(17);
   root->right = new node(72);
   root->left->left = new node(12);
   root->left->right = new node(23);
   root->left->left->left = new node(9);
   root->left->left->right = new node(14);
   root->left->right->right = new node(19);
   root->right->left = new node(54);
   root->right->right = new node(76);
   root->right->left->right = new node(67);


   int height = max_depth(root);

   cout <<"height of this tree "<< height;

   return 0;

   }

