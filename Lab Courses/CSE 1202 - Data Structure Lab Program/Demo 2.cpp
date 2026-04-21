#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node*left;
    Node*right;
};
Node*createNode(int value)
{
    Node*newNode= new Node;
    newNode->data=value;
    newNode->left=newNode->right=nullptr;
}
Node*insert(Node*node ,int value )
{
    if (node==nullptr)
        return createNode(value);
    if (value < node->data)
    {
       node->left=insert(node->left,value);
    }
    else
    {
        node->right=insert(node->right,value);
    }
    return node;

}
void postorder(Node*node)
{
    if(node==nullptr)
        return ;

    postorder(node->left);
    postorder(node->right);
    cout<<node->data<<" " ;

}
int sumLessThan(Node*node,int threshold)
{
    if (node==nullptr)
        return 0;
    int sum=0;

    sum+=sumLessThan(node->left,threshold);
    sum+=sumLessThan(node->right,threshold);

    if (node->data < threshold)
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

    cout<<"Enter Number ";
    cin>> n;

    cout <<"Enter"<<n<<"value"<<endl;
    for (int i=0 ;i<n;i++)
    {
        cin>>val;
        root=insert(root,val);
    }

    cout<<"postOrder ";
    postorder(root);
    cout<<"Enter threshold";
    cin>>threshold;

     cout<<"Energy value of "<<threshold;
    int total = sumLessThan(root,threshold);
    cout<<"Total " <<total;
}
