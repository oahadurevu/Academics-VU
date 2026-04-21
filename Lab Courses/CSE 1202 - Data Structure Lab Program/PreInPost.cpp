#include<iostream>
using namespace std;

struct Node{
    int data;
    Node*left;
    Node*right;
};

Node*createNode(int value)
{
    Node*newNode=new Node;
    newNode->data=value;
    newNode->left=newNode->right=nullptr;
    return newNode;
}
Node*insert(Node*node,int value)
{
    if (node==nullptr)

        return createNode(value);

     if (value < node->data)

        node->left=insert(node->left,value);

    else{
            node->right=insert(node->right,value);

    }
    return node;
}

void preorder(Node*node)
{
    if (node==nullptr)
        return;
    cout<<node->data<<" ";
    preorder(node->left);
    preorder(node->right);
}
int sumLessthan(Node*node ,int threshold)
{
    if (node==nullptr)
        return 0;
    int sum =0;
    sum+=sumLessthan(node->left,threshold);
    sum+=sumLessthan(node->right,threshold);

    if (node->data <threshold)
    {
        cout<<node->data<<" ";
        sum+=node->data;
    }
    return sum;


}
int main ()
{
    int n,val,threshold;
    Node*root=nullptr;

    cout<<"Enter number of value ";
    cin>>n;

    cout<<"Enter " <<n << "every value";
    for (int i=0;i<n;i++)
    {
        cin>>val;
        root=insert(root,val);
    }
    cout<<"\n PreOrder Terversal ";
    preorder(root);

    cout<<"Enter Threshold ";
    cin>>threshold;

    cout<<"Energy use value "<<threshold<<" ";
    int total=sumLessthan(root,threshold);
    cout <<"Total Energy "<<total<<endl;
}
