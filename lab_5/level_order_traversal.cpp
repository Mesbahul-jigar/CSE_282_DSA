// write a C++ program to find the level order traversals of the following trees.

//       ____50____
//    _17_        _72_
// _12_   23_   54_   76
//9    14    19    67


#include<bits/stdc++.h>
using namespace std;

struct node {
    int data;
    node* left;
    node* right;
    node(int x) {
        data = x;
        left = right = NULL;
    }
};

void levelorder(node* root) {
    if (root == NULL) {
        cout << "empty";
    } else {
        queue<node*> list;
        list.push(root);
        cout <<"level order traversal "<<endl;

        while (!list.empty()) {
            node* temp = list.front();
            list.pop();

            if (temp->left != NULL) {
                list.push(temp->left);
            }
            if (temp->right != NULL) {
                list.push(temp->right);
            }
            cout << temp->data << " ";
        }
    }
}

int main() {
    node* root = new node(50);
    root->left = new node(17);
    root->right = new node(72);
    root->left->left = new node(12);
    root->left->right = new node(23);
    root->right->left = new node(54);
    root->right->right = new node(76);
    root->left->left->left = new node(9);
    root->left->left->right = new node(14);
    root->left->right->right = new node(19);
    root->right->left->right = new node(67);

    levelorder(root);
    return 0;
}
