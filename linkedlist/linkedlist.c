//Aryan Panwar
//3A - 54

//linked list 
#include <stdio.h>
#include <stdlib.h>

struct node {
    int roll;
    char name[10];
    struct node * next;
};
void insertAtFront(struct node ** head ,struct node ** tail ,  int roll  , char name[]){
    struct node * temp = (struct node * )malloc(sizeof(struct node));
     temp->roll = roll;
     for (int i = 0 ; i<10 ; i++){
        temp-> name[i] = name[i];
     }
     if (*head == NULL){
        *head = temp;
        *tail = temp;
        temp->next = NULL;
     }
     else temp->next = *head;
     *head = temp;
}


void insertAtEnd(struct node ** tail , int roll ,  char name[]){
    struct node * temp = (struct node * )malloc(sizeof(struct node));
    temp->roll = roll;
    for (int i = 0 ; i<10 ; i++){
        temp-> name[i] = name[i];
    }
    temp->next = NULL;
      
    (*tail)->next = temp;
    *tail = temp;
    
}

void insertAtKthPosition(struct node * head , int roll ,char name[] , int k){
    int count = 1 ; 
    struct node * tail = 0; 
    if (k== 0)insertAtFront(&head ,&tail ,  roll , name);
    while(count<k){
        head = head->next;
        count++;
    }
    struct node * temp = (struct node * )malloc(sizeof(struct node));
    temp->roll = roll;
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

void print(struct node * head){
    struct node * current = head;
    while(current != NULL){
        printf("roll no  = %d\n" , current->roll );
        printf("name = %s\n" , current->name);
        current = current->next;
    }
    
}
int main(){
    int n =1;
    int roll;
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
            printf("enter roll , name respectively\n");
            scanf("  %d  " , &roll );
            scanf("%s" , name);
            
        }
        if (order == 1)insertAtFront(&head ,&tail, roll  , name );
        else if (order == 2)insertAtEnd(&tail , roll , name );
        else if (order == 3){
            printf(" enter position value \n");
            scanf("%d", &k);
            insertAtKthPosition(head , roll  , name,k );}
        else if (order == 4){
            printf("enter position from where you want to delete\n");
            scanf("%d",&k);
            deleteFromKthPosition(&head , k);
        }
        printf("to proceed after enter 1 , to quit enter 0 \n");
        scanf("%d" , & n);
    }
    print(head);
    return 0 ;
}


/*
Ques : Write the logic for new node creation.
Ans : struct node n1;
        dynamically : struct node * temp = (struct node *)malloc(sizeof(struct node));

Ques : How can you use the head and pointing to head and nodes?
Ans : Head is used to point the starting node and the node structure contains a next variable 
        in it which stores the address of the next node . 
        //let first node be n1 
        //then 
        head = &n1; 
        //now let  the next node be n2
        n1.next = &n2;

Ques : Insertion will be in beginning or end. Show steps.
Ans : If the insertion is in beginning then , we will create a new node and store the address 
        of head in the newNode.next and head will equal to the address of new node ; 
        struct node * newNode  = (struct node *)malloc(sizeof(struct node));
        newNode->data = data;
        newNode->next = head;
        head = newNode;
      If the insertion is in end then , we will create a new node and store the address 
        of new Node in the lastNode.next or tail->next and newNode.next will equal to 
         NULL 
        struct node * newNode  = (struct node *)malloc(sizeof(struct node));
        tail->next = newNode;
        newNode->data = data;
        newNode->next  = NULL;

Ques : 
*/