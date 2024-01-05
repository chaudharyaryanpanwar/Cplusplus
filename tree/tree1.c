#include <stdio.h>
#include <stdlib.h>
//Aryan Panwar
//3A - 54
struct node{
    int data; 
    struct node * left;
    struct node * right;
};
void print(struct node * root){
    struct node * prev ;
    struct node * next;
    while(root!=NULL){
        printf("%d\n",root->data);
        prev = root ;
        root = root->right;
    }
}
void insert(struct node * root , int data ){
    int isRight = 0 ; 
    struct node * prev  = root; 
    while(root!= NULL){
        prev = root;
        if (data > root->data){
            root = root->right;
            isRight = 1;
        }
        else {
            root = root->left;
            isRight = 0 ;
        }
    }
    struct node * temp = (struct node * )malloc(sizeof(struct node));
    temp->data = data;
    temp -> left = NULL;
    temp ->right = NULL;
    if (isRight == 1)prev->right = temp;
    else prev->left = temp;
    
}
int main(){
    struct node n1;
    n1.data = 1 ; 
    n1.left = NULL; 
    n1.right = NULL ; 
    struct node * root = &n1;
    int n;
    int value ; 
    scanf("%d", &n);
    for (n ; n>0 ; n--){
        scanf("%d" , &value);
        insert(root , value);
    }
    print(root);
    return 0 ; 
}