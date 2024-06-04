#include<iostream>
using namespace std;
//
// Created by zccbbg on 2023-10-19.
//
struct Node{
    int data;
    Node *next;
};
Node * head, * p, * r;
int x;
int main(){
    cin>>x;
    head = new Node;
    r=head;
    while(x!=-1){
        p = new Node;
        p->data = x;
        p->next = NULL;
        r->next = p;
        r = p;
        cin>>x;
    }
    p=head->next;
    while(p->next!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<p->data<<endl;
    system("pause");
}