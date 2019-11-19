// Sample driver
// EE 312 Fall 2018
//
// The BST should work for any data type or object.
// Other user created objects must have the << operator overloaded for 
// output.
//

#include <iostream>
#include <fstream>
#include "BST312.h"


using namespace std;

template <typename T>
void print(vector<T> vec){
    for(int i = 0 ; i < vec.size() ; i++){
        cout << vec[i] << endl;;
    }
}

int main() {

    ifstream inFile;
    inFile.open("test.txt");

    BST_312<string> bst;
   
    string s;
    inFile >> s;
    while (inFile) {;
        cout << "inserting ... " << s << endl;
        bst.insertItem(s);
        inFile >> s;
    }

    cout << "postorder traversal is " << endl;
    print(bst.postOrderTraversal());
    cout << endl;

    cout << "preorder traversal is " << endl;
    print(bst.preOrderTraversal());
    cout << endl;

    cout << "inorder traversal is " << endl;
    print(bst.inOrderTraversal());
    cout << endl;

    cout << "Remove items " << endl;
    cout << "number of nodes in tree before delete is " << bst.countNodes() << endl;
    s = "is";
    bst.deleteItem(s);
    s = "The";
    bst.deleteItem(s);
    s = "GRAY";
    bst.deleteItem(s);
    s = "2";
    bst.deleteItem(s);
    s = "joke";
    bst.deleteItem(s);
    s = "a";
    bst.deleteItem(s);
    s = "aaron";
    bst.deleteItem(s);
    s = "untold";
    bst.deleteItem(s);
//    print(bst.postOrderTraversal());
    cout << endl;
    cout << "number of nodes in tree after delete is " << bst.countNodes() << endl;
    cout << endl;
    cout << "testing is item in tree";
    s="is";
    if (bst.isItemInTree(s) == false){
        cout << "\ncorrect, is not found in tree";
    }
    s="joke";
    if (bst.isItemInTree(s) == true){
        cout << "\ncorrect, joke is found in tree";
    }



}

