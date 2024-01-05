//Aryan Panwar
//3A - 54

//doubly linked list 
#include <stdio.h>
#include <stdlib.h>

struct node {
    int age;
    char name[10];
    char relation[10];
    char gender;
    struct node * next;
    struct node * prev;
};
void insertAtFront(struct node ** head ,struct node ** tail ,  int age  , char name[] ,
     char relation[] , char gender){
    struct node * temp = (struct node * )malloc(sizeof(struct node));
     temp->age = age;
     temp->gender = gender;
     for (int i = 0 ; i<10 ; i++){
        temp-> name[i] = name[i];
     }
     for (int i = 0 ; i<10 ; i++){
        temp-> relation[i] = relation[i];
     }
     if (*head == NULL){
        *head = temp;
        *tail = temp;
        temp->next = NULL;
        temp->prev = NULL;
     }
     else {
        temp->next = *head;
        temp->prev = NULL;
     }
     *head = temp;
}


void insertAtEnd(struct node ** head ,struct node ** tail ,  int age  , char name[] ,
     char relation[] , char gender){
    struct node * temp = (struct node * )malloc(sizeof(struct node));
    temp->age = age;
    temp->gender = gender;
    for (int i = 0 ; i<10 ; i++){
        temp-> name[i] = name[i];
    }
    for (int i = 0 ; i<10 ; i++){
        temp-> relation[i] = relation[i];
    }
    temp->next = NULL;
    temp->prev = *tail;
      
    (*tail)->next = temp;
    *tail = temp;
    
}

void insertAtKthPosition(struct node * head  ,  int age  , char name[] ,
     char relation[] , char gender, int k ){
    int count = 1 ; 
    struct node * tail = 0; 
    if (k== 0)insertAtFront(&head ,&tail ,  age , name, relation , gender );
    while(count<k){
        head = head->next;
        count++;
    }
    if (head->next == NULL)insertAtEnd(&head ,&tail ,  age , name, relation , gender );
    else {
        struct node * temp = (struct node * )malloc(sizeof(struct node));
        temp->age = age;
        temp->gender = gender;
        for (int i = 0 ; i<10 ; i++){
            temp-> name[i] = name[i];
        }
        temp->next = head->next;
        head->next = temp;
    }
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
        printf("name = %s\n" , current->name);
        printf("gender = %c\n", current->gender);
        printf("relation = %s\n" , current->relation);
        printf("age  = %d\n" , current->age );
        current = current->next;
    }
    
}
int main(){
    int n =1;
    int age;
    char name[10];
    char relation[10];
    char gender;
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
            printf("enter age  , gender , name , relation respectively\n");
            scanf("  %d  " , &age );
            scanf("%c" , &gender);
            scanf("%s" , name);
            scanf("%s" , relation);
            
            
        }
        if (order == 1)insertAtFront(&head ,&tail, age , name , relation , gender);
        else if (order == 2)insertAtEnd(&head , &tail , age, name , relation , gender);
        else if (order == 3){
            printf(" enter position value \n");
            scanf("%d", &k);
            insertAtKthPosition(head , age  , name , relation , gender , k );}
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
        in it which stores the address of the next node and the previous will be NULL. 
        //let first node be n1 
        //then 
        head = &n1; 
        //now let  the next node be n2
        n1.next = &n2;
        n1.prev = NULL;


*/