#include<iostream>
using namespace std;

 const int max_stacks=10;

int Stacks[max_stacks];
int top =-1;
int x;

void push()
{
    if (top==max_stacks-1)
    {
        cout<<"Overflow";
    }
    else
    {
        cout<<"Push Element ";
        cin>>x;
        top++;
        Stacks[top]=x;
    }

}
void pop()
{
    if (top==-1)
    {
        cout<<"Underflow ";
    }
    else
    {
        cout<<"Popped Element "<<Stacks[top] <<endl;
        top--;

    }
}
void display ()
{
    if (top==-1)
    {
        cout<<"Empty";
    }
    else
    {
        cout <<"stacks ";
        for (int i=top;i>=0;i--)
        {
            cout<< Stacks[i]<<" ";
        }
    }
}

int main()
{
    push();
    push();
    push();
    pop();
    display();
}

