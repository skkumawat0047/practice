#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
    int data;
    struct Node*next;
}Node;

int main(){
    Node* l1, *l2, *l3;
    l1=(Node*)malloc(sizeof(Node));
    l2=(Node*)malloc(sizeof(Node));
    l3=(Node*)malloc(sizeof(Node));
    l1->data=23;
    l2->data=53;
    l3->data=86;
    l1->next=l2;
    l2->next=l3;
    l3->next=NULL;
    Node* temp=l1;

    while (temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
    return 0;
    
}