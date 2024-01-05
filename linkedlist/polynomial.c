//polynomial
#include <stdio.h>
#include <stdlib.h>
// 4x3 + 6x2 + 10x + 60
//5x2 + 20
struct node{
    int data;
    int power;
    struct node * next;
};
void insertAtFront(struct node * * head , int data   , int power){
    struct node * tempPointer = (struct node *)malloc(sizeof(struct node));
    //tempPointer->data
    (*tempPointer).data = data;
    (*tempPointer).power = power;
    (*tempPointer).next = *head;
    * head = tempPointer;
}
void insertAtEnd(struct node * head  , int data , int power){
    struct node * tempPointer = (struct node *)malloc(sizeof(struct node));
        if (head == NULL){
            printf("dikat yahin h");
            return ;
        }
        while((*head).next  != NULL)head = (*head).next;
        tempPointer->data = data;
        tempPointer->power = power;
        tempPointer->next = NULL;
        head->next = tempPointer;
}
void add(struct node  * head1 ,struct node * head2){
    while(head1 != NULL){
        if (head1->power == head2->power){
            head1->data = head2->data +  head1->data;
            head1 = head1->next;
        }
        else if( head1->power<head2->power)head2 = head2->next;
        else head1  = head1->next;
    }
}

void print(struct node * head1){
    while (head1 != NULL){
        printf("%dxtoPower%d+",head1->data , head1->power);
        head1 = head1->next;
    }
}
int main(){
    struct node * head1  = NULL;
    struct node * head2 = NULL;
    insertAtFront(&head1 , 4 , 3);
    insertAtFront(&head2 , 5, 2);
    
    insertAtEnd(head1 , 6 , 2);
    insertAtEnd(head1 , 10 , 1);
    insertAtEnd(head1 , 60 , 0);
    insertAtEnd(head2 , 20 , 0);
    add(head1 , head2);
    print(head1);
    
    return 0;
}