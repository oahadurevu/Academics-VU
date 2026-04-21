#include<iostream>
using namespace std;


class Node {


public :
    int data;
    Node *next;
    Node(int value)
    {
       data=value;
       next =nullptr;
    }
};
int main ()
{
    int n;
    cout<<"Number of Nodes";
    cin>>n;
    int arr[n];
    cout<<"Enter z"<<n<<"value";
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }


    Node*head=new Node(arr[0]);
     Node*current=head;
     for (int i=1;i<n;i++)
     {
         Node*newNode=newNode(arr[i]);
         current->next=new Node;
         current =new Node;
     }

     cout<<"Linked List ";
      current=head;
      while(current !=nullptr)
      {
          cout<<current->data<<"->";
          current=current->next;
      }
      cout<<"Null";
}

