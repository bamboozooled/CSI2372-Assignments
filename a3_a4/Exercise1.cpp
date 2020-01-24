// ------------------------------------------------------------------------------
// Assignment 3 & 4 Exercise1.cpp
// Written by: Oluwatimi Owoturo 8606957, Uduak Udofia 7803807 
// For CSI2372 Section A – Fall 2019
// -----------------------------------------------------------------------------

#include <stdio.h>

#include <iostream>
#include <fstream>
#include <iomanip>
#include <vector>
using namespace std;
ifstream filename("num.dat");
class Tree {
    private :
        struct Node
        {
            int num;
            Node * left;
            Node * right;
        } *root;
    public :
        Tree(int n = 0);
        Tree(Node * p) {
            root = p;
        }
        void printTree(Tree t, int k);
        void printNode(Node * node);
        Node* addToTree(Node * node, int arr[], int index, int n){
            if (index < n){
                Node * temp = (Node*)malloc(sizeof(Node));
                temp->num = arr[index];
                temp->left = NULL;
                temp->right = NULL;
                node = temp;
                node->left = addToTree(node->left, arr, 2 * index + 1, n);
                node->right = addToTree(node->right, arr, 2 * index + 2, n);
            }
            return node;
        }
};
int main(){
    cout << "Enter the number of the sequence of length n : ";
    int n;
    cin >> n;
    Tree tree = Tree(n);
    return 0;
}

Tree::Tree(int n){
    int array[n];
    int i = 0;
    while (i < n){
        int number;
        filename >> number;
        array[i] = number;
        i++;
    }
    int arraymain[n];
    i = n-1;
    int j = 0;
    
    while (i >= 0 && j < n){
        arraymain[j] = array[i];
        i--;
        j++;
    }
    
    Node* root = addToTree(root, arraymain, 0, n);
    Tree tree = Tree(root);
    printTree(tree, 0);
    
}

void Tree::printTree(Tree t, int k){
    printNode(t.root);
}

void Tree::printNode(Node * node){
    if (node != NULL){
        cout << "t.root->num = " << node->num << endl;
        printNode(node->left);
        printNode(node->right);
    }
}
