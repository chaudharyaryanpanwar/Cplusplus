//Aryan Panwar
//3-A 54



#include <stdio.h>
#include <stdlib.h>
struct node {
    int value; 
    struct node * next;
};

void push (struct node * * top , int value ){
    struct node * temp = (struct node *)malloc(sizeof(struct node));
    temp -> value = value;
    temp->next = *top;
    *top = temp ;
    printf("pushed %d\n" , temp->value);
}

void pop (struct node * * top ){
    int faltu = (*top) -> value;
    *top = (*top)->next;
    printf("removed element is %d\n",faltu);
}
void print(struct node * top){
    printf("linked list is printing");
    while(top!=NULL){
        printf("value = %d\n",top->value);
        top = top->next;
    }
}

int main(){
   
    struct node * top = NULL;
    
    push(&top , 5);
    push(&top , 10);
    push(&top , 15);
    pop(&top);
    print(top);

}