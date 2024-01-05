//aryan panwar
//3A = 54

//find lenght of string
#include <stdlib.h>
#include <stdio.h>
int main (){
    //creating a sting 
    char s[10];
    //taking input in array
    printf("enter in string : ");
    scanf("%s", s);
    //finding the length of string
    int length = 0 ; 
    //if the null character is found the counting will stop
    //and the total count will equal to the total length of the string
    for (int i= 0 ; i<10 ; i++){
        if (s[i]=='\0')break;
        length++;
    }
    //printging the length 
    printf("the length of the string is : %d\n" , length);

}
