


#include <stdio.h>
#include <stdlib.h>
struct node {
    int data ; 
    struct node * next ; 
};
void enqueue(struct node ** head , struct node ** tail , int data ){
    struct node * temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data ;
    temp->next = NULL;
    if ((*tail)==NULL){
        *tail = temp ;
        *head = temp ;
    }
    else {
        (*tail)->next = temp ;
        (*tail) = temp;
    }
}
void dequeue(struct node ** head){
    *head  = (*head)->next;
}
void print(struct node * head  ){
    printf("prinitng queue \n");
    while(head!=NULL){
        printf("%d\t",head->data);
        head = head->next;
    }
}
int main (){
    struct node * head ;
    struct node * tail  = NULL ;
    enqueue(&head , &tail , 1);
    enqueue(&head , &tail , 2);
    enqueue(&head , &tail , 12);
    enqueue(&head , &tail , 200);
    dequeue(&head);
    print(head);
    return  0 ; 

}