// Implementation of stack using linked list
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
   
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};
class stack{
    public:
    Node* head;
    int count;
   
    stack(){
        head = NULL;
        count = 0;
    }
   
    void push(int data){
        Node* newNode = new Node(data);
        count++;
        if(head == NULL){
            head = newNode;
            return;
        }
        newNode->next = head;
        head = newNode;
    }
   
    void pop(){
        if(head == NULL){
            cout<<"Underflow"<<endl;
            return;
        }
        count--;
        head = head->next;
    }
   
    int peek(){
        if(head == NULL){
            return -1;
        }
        return head->data;
    }
   
    bool isEmpty(){
        return head == NULL;
    }
   
    int size(){
        return this->count;
    }
};
int main(){
    stack s;
    s.push(10);
    s.push(20);
    cout<<s.size()<<endl;
    while(!s.isEmpty()){
        cout<<s.peek()<<endl;
        s.pop();
    }
}