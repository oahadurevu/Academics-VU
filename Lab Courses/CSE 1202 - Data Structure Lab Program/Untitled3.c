#include<stdio.h>
#include<stdlib.h>


struct Node //node ready korlam
{

    int data;//info
    struct Node *next;//node er address k point korar jono and ekta node theke r ekta node k point korsi karon diff type data thakte pare
};
int main ()
{
    struct Node*a=NULL;//null node create koressi
    struct Node*b=NULL;
    struct node*c=NULL;

    a=(struct Node*)malloc(sizeof(struct Node));//proti node e memory alloced korsi
    b=(struct Node*)malloc(sizeof(struct Node));//
    c=(struct Node*)malloc(sizeof(struct Node));

    a->data=10;//value assign
    b->data=20;
    c->data=30;

    a->next=b;//address diye link tauri korlam..jeta k point korse node er address
    b->next=c;//b te c er address rakhlam
    c->next=NULL;//c te null rakhbo and r kono node e jete chaschi nah

    while(a!=NULL)//a check then b check then c check
    {
        printf("%d->",a->data);//first e 10 print hobe then next node e jabe .... 20 then null
        a=a->next;//a theke b te jabe first e...then b thheke c ,,c theke null
    }
    return 0;


}

