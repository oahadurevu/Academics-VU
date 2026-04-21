#include<iostream>
using namespace std;


const int max_stacks=10;
int Stack[max_stacks];
int top=-1;
 int x;
void push()
{
    if (top==max_stacks -1)
    {
        cout<<"Overflow";
    }
    else{
           cout<<"Enter Push Value ";
        cin>>x;
        top++;
        Stack[top]=x;
    }
}
void pop(){
    if (top==-1)
        cout<<"Underflow";
    else {

        cout<<"Pooped "<<Stack[top];
        top--;
    }

}
void display()
{
    if (top==-1)
    {
        cout<<"Empty ";
    }
    else
    {
        for(int i=top ;i>=0;i--)
        {
            cout<<<<Stack[i]<<" ";
        }
    }
}
int main ()
{
    push();
    push();
    pop();
    push();
    display();


}
