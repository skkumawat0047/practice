#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node*next;
};

struct Node* head=NULL;
struct Node* createNode(int val)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data=val;
    newNode->next=NULL;
    return newNode;
};

struct Node* addivalue(int val){
    struct Node* value = createNode(val);
    if(head==NULL){
        head=value;
    }else{
        struct Node* temp=head;
        while (temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=value;
    }
};
void printall(){
    struct Node*temp=head;
    while (temp!=NULL)
    {
        printf("%d ", temp->data);
        temp=temp->next;
    }
    printf("\n");
}
void printfront(){
    printf("%d ", head->data);
    printf("\n");

}
void popfront(){
    struct Node*temp=head;
    head=head->next;
    temp->next=NULL;
    printf("%d ", temp->data);
    free(temp);
    printf("\n");
}
void popback(){
    if (head == NULL) return;
    if (head->next == NULL) {
        free(head);
        head = NULL;
        return;
    }
    struct Node* temp = head;
    struct Node* prev = NULL;
    while (temp->next != NULL) {
        prev = temp;
        temp = temp->next;
    }
    prev->next = NULL;
    free(temp);
}
void addfront(int val){
    struct Node* addFront=createNode(val);
    if(head==NULL){
        head=addFront;
    }else{
        struct Node*temp=head;
        temp=addFront;
        temp->next=head;
        head=temp;
    }
    
}
int main(){
    addivalue(2);
    addivalue(3);
    addivalue(4);
    printall();
    addfront(12);
    printall();
    printfront();
    popfront();
    popback();
    printall();
}