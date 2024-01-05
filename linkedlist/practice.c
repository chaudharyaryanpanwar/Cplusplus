#include <stdio.h>
#include <stdlib.h>
//works fine ofn gdb compiler
struct node{
    int data ;
    struct node * next ; 
};
void insertAtFront(struct node * * head , struct node * * tail , int data){
    struct node * temp = (struct node * )malloc(sizeof(struct node));
    if (*head == NULL){
        *tail = temp;
        temp->next = NULL;
    }
    else {
        temp->next= *head ;
    }
    *head = temp;
    temp->data = data ; 
    
}
void insertAtEnd(struct node ** head , struct node ** tail , int data){
    struct node * temp= (struct node *)malloc(sizeof(struct node));
    if (*tail == NULL){
        *head = temp;
    }
    else {
        (*tail)->next = temp;
        *tail = temp;
        temp->data = data;
    }
}

void insertAtKthPosition(struct node ** head  , struct node ** tail , int data , int k ){
    if (k == 1){
        insertAtFront(head , tail , data );
    }
    struct node * temp1 = *head;
    while (k!=1){
        temp1 = temp1->next;
        k--;
    }
    if (temp1 == (*tail))insertAtEnd(head , tail , data);
    else {
        struct node * temp2 = (struct node * )malloc(sizeof(struct node));
        temp2->next = temp1->next ;
        temp1->next = temp2;
        temp2->data = data;
    }
}

void print(struct node * head){
    struct node * temp = head;
    while (temp != NULL){
        printf("%d->",temp->data);
        temp = temp->next;
    }
}
int main(){
    struct node * head ; 
    struct node * tail;
    int data ; 
    int command ;
    int k;
    while(1){
        printf("Enter 1 for insertionAtFront ,\n2 for insertionAtEnd , \n3 for insertionAtKthPositon,\n and 0 for exit\n");
        scanf("%d",&command);
        if (command != 0){
            printf("Enter data : ");
            scanf("%d",&data);
        }
        if (command == 1){
            insertAtFront(&head , &tail , data);
        }
        else if (command == 2){
            insertAtEnd(&head , &tail , data);
        }
        else if (command == 3){
            printf("Enter position : ");
            scanf("%d",&k);
            insertAtKthPosition(&head , &tail , data , k);
        }
        else {
            print(head);
            break;
        }
    }
}