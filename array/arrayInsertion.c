//Aryan Panwar 
//3A  - 54


//array insertion , deletion ,traversal

#include <stdio.h>

int main (){
    //decalation of array 
    int array[10]={1,2,3,4,5,6,7,8,9,10};

    //insertion in array can be done by directly specifying the index of array
    array[0] = 100; 

    //traversing in array
    printf("traversing in array\n");
    for (int i = 0 ; i<10 ; i++){
        printf("%d\n", array[i]);
    }
    //deletein in array is not possible , one can only modify values in array 
    array[0] = -1; 
    //only value can be changed , but exactly deletion is not possible
    //printing final elements
    printf("Printing\n");
    for (int i = 0 ; i<10 ; i++){
        printf("%d\n", array[i]);
    }
}