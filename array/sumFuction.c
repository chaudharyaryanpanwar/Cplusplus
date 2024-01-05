//aryan panwar
//3A =- 54

//sum function 
#include <stdio.h>
//sum function it takes two inputs a and b 
int sum(int a , int b){
    //it return a+b
    return a+b;
}
int main(){
    //declaring two variables for input and third for storign the result
    int a , b , c;
    printf("Enter values of a and b : \n");
    //taking input from user of first and second variable
    scanf("%d %d" , &a , &b);
    //calling function and assigning value to the third varubale
    c = sum(a,b);
    //printing the result
    printf("sum of 'a' and 'b' using sum function is : %d",c);
    
    return 0;
}