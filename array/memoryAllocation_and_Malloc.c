//aryan panwar
//3A - 54


//memory allocation _ and _ using Malloc

#include <stdio.h>
#include <stdlib.h>

int main(){
    
    //declaring an array of type int and  size 10 and filling with values
    int array[10] = {1,3,2,3,4,5,6,7,8,90};
    //printing values of array location of each element
    printf("printing values of array location of each element : /n");
    for (int i =  0 ; i<10 ; i++){
        printf("address of %d th element : %p\n", i+1 ,&array[i] );
    }
    printf("\n");
    //it can be observed that the addresses are printed after an interval of 4 
    //which shows that a single element occupies size of 4 bits

    //creating a new array using malloc of same size and type as previos array
    int * temp = (int * )malloc(10 * sizeof(int));
    //printing the address of new array of first element
    printf("new array starts from : %p", temp);


    return 0;
}