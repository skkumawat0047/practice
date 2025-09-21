#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

struct Node* createNode(int val){
    struct Node* newNode= (struct Node*)malloc(sizeof(struct Node));
    newNode->data=val;
    newNode->next=NULL;
    return newNode;
};

struct Node* head=NULL;
void addnode(int val){
    struct Node* New=createNode(val);
    if(head==NULL){
        head=New;
    }
    else{
        struct Node* temp=head;
        while (temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=New;
    }
}
void printall(){
    if(head==NULL){
        printf("the linklist is empty! ");
        return;
    }
    struct Node* temp=head;
    while (temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
int main(){
    addnode(10);
    addnode(36);
    addnode(21);
    printall();
}