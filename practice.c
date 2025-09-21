#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
     struct Node* next;    
};

struct Node* createNode(int val)
{
    struct Node* newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=val;
    newNode->next=NULL;
    return newNode;
};


int main(){
    struct Node* head=createNode(10);
    head->next=createNode(13);
    head->next->next=createNode(16);
    struct Node* temp=head;
    while (temp!=NULL)
    {
        printf(" %d ",temp->data);
        temp=temp->next;
    }
    
}
