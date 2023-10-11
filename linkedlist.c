#include <stdio.h>
#include <stdlib.h>

struct node {
    int roll;
    int standard;
    char name[10];
    struct node * next;
};
void insertAtFront(struct node ** head , int roll , int standard , char name[]){
    struct node * temp = (struct node * )malloc(sizeof(struct node));
     temp->roll = roll;
     temp -> standard = standard;
     for (int i = 0 ; i<10 ; i++){
        temp-> name[i] = name[i];
     }
     temp->next = *head;
     *head = temp;
}


void insertAtEnd(struct node ** tail , int roll , int standard, char name[]){
    struct node * temp = (struct node * )malloc(sizeof(struct node));
    temp->roll = roll;
    temp -> standard = standard;
    for (int i = 0 ; i<10 ; i++){
        temp-> name[i] = name[i];
    }
    (*tail)->next = temp;
    *tail = temp;
    temp->next = NULL;
}

void insertAtKthPosition(struct node * head , int roll, int standard ,char name[] , int k){
    int count = 1 ; 
    if (k== 0)insertAtFront(&head , roll , standard , name);
    while(count<k){
        head = head->next;
        count++;
    }
    struct node * temp = (struct node * )malloc(sizeof(struct node));
    temp->roll = roll;
    temp -> standard = standard;
    for (int i = 0 ; i<10 ; i++){
        temp-> name[i] = name[i];
    }
    temp->next = head->next;
    head->next = temp;
}

void deleteFromKthPosition(struct node * * head , int k){
    if (k== 0){*head = (*head)->next;}
    int count = 1 ; 
    while(count<k){
        *head = (*head)->next;
        count++;
    }
    (*head)->next = (*head)->next->next;
}

void print(struct node ** head){
    struct node * current = *head;
    while(current != NULL){
        printf("roll no  = %d\nstandard = %d\n" , current->roll , current->standard);
        printf("name = %s\n" , current->name);
        current = current->next;
    }
    
}
int main(){
    int n =1;
    int roll;
    int standard;
    char name[10];
    int order;
    int k ; 
    struct node * head = NULL;
    struct node * tail = NULL;
    printf("to proceed after enter 1 , to quit enter 0 \n");
        scanf("%d" , & n);
    
    while (n!=0)
    {
        
        printf("enter 1 for insertion at front ,\n 2 for insetion at end,\n 3 for insertion at kth posittion ,\n 4 for deletetion from kth positon\n ");
        scanf("%d" , & order);
        if (order != 4){
            printf("enter roll  ,standard , name respectively\n");
            scanf("  %d %d " , &roll , & standard);
            scanf("%s" , name);
            
        }
        if (order == 1)insertAtFront(&head , roll , standard , name );
        else if (order == 2)insertAtEnd(&tail , roll , standard , name );
        else if (order == 3){
            printf(" enter position value \n");
            scanf("%d", &k);
            insertAtKthPosition(head , roll , standard , name,k );}
        else if (order == 4){
            printf("enter position from where you want to delete\n");
            scanf("%d",&k);
            deleteFromKthPosition(&head , k);
        }
        printf("to proceed after enter 1 , to quit enter 0 \n");
        scanf("%d" , & n);
    }
    print(&head);
    return 0 ;
}