//aryan panwar
//3A - 54

//check array addressing and print all location of array elements

#include <stdio.h>

int main(){
    //creating an array of type int and  size 10 and filling with values
    int array[10] = {1,3,2,3,4,5,6,7,8,90};
    //printing values of array location of each element
    printf("printing values of array location of each element : /n");
    for (int i =  0 ; i<10 ; i++){
        printf("address of %d th element : %p\n", i+1 ,&array[i] );
    }
    //it can be observed that the addresses are printed after an interval of 4 
    //which shows that a single element occupies size of 4 bits
    return 0 ;
}