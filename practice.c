#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node* next;
};

struct Node* head=NULL;

struct Node* createNode(int val){
    struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
    newnode->data=val;
    newnode->next=NULL;
    return newnode;
}
void addNode(int val){
    struct Node* newNode=createNode(val);
    if(head==NULL){
        head=newNode;
    }else{
        struct Node*temp=head;
        while (temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newNode;
    }
}
void printall(){
    if(head==NULL){
        printf("linklist is empty!");
    }else{
        struct Node*temp=head;
        while (temp!=NULL)
        {
            printf("%d ", temp->data);
            temp=temp->next;
        }
        
    }
}
int main(){
    addNode(3);
    addNode(13);
    addNode(38);
    addNode(32);
    addNode(49);
    printall();
}
