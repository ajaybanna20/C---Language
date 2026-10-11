#include<iostream>
using namespace std;
class Node{

    public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data =data;
        left=NULL;
        right=NULL;
    }
    {
        public:
        int index;
        binaryTree(){
            index = -1;
        }   
    }
    Node* buildTree(int arr[]){
        index++;
        if (arr[index]==-1)return NULL;
            Node* newNode = new Node(arr[index]);//new node
            newNode->left = buildTree(arr);//left part 
            newNode->right = buildTree(arr);//right part
            return newNode;

    }
};

int main()
{
    binaryTree tree;
    int arr[] = {1,2,3,-1,5,-1,3,-1,6,-1,-1};
    Node* root = tree.buildTree(arr);
    cout<<root->data<<endl;
    tree.preOrder(root);

    return 0;

}
Class binaryTree{
    public:
    int index;
    binaryTree{
        index = -1;

    }
}
