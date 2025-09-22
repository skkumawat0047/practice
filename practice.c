#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
};

int main(){
    struct Node* head=(struct Node*)malloc(sizeof(struct Node));
    struct Node* head2=(struct Node*)malloc(sizeof(struct Node));
    struct Node* head3=(struct Node*)malloc(sizeof(struct Node));
    struct Node* head4=(struct Node*)malloc(sizeof(struct Node));
    head->data=9;
    head2->data=12;
    head3->data=18;
    head4->data=13;
    head->next=head2;
    head2->next=head3;
    head3->next=head4;
    head4->next=NULL;
    struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
    struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
    // struct Node* next=temp->next;
    temp->data= 7;
    temp->next = head3;
    head2->next = temp;
    temp=head;
    while (temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL\n");
}