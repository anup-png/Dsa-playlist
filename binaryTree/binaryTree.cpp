#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;


 class Node{
 
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        this->data = val;
        this->left =NULL;
        this->right =NULL;
    }


 };

  Node* createTree(){
     
     cout<<"enter the value : "<<endl;
     int data;
     cin>>data;
    
    if(data == -1){
        return NULL;
    }

    Node* newNode = new Node(data);
     
    cout<<"left of the node : "<<newNode->data<<endl;
    newNode->left =createTree();
    cout<<"right of the node : "<<newNode->data<<endl;

    newNode->right=createTree();

    return newNode;


  }

int main (){


  Node* root = createTree();

  cout<<root->data<<endl;



    return 0;
}