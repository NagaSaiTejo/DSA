#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int value){
        data=value;
        next=NULL;
    }
};
int main(){
    Node* newNode=new Node(10);
    Node* newNode1=new Node(20);
    Node* temp=newNode;
    newNode->next=newNode1;
    while (temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return 0;
}