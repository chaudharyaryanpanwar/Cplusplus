//aryan panwar
//3A - 54


//string reverse
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
    //left poointer
    int left = 0 ; 
    //right pointer
    int right = length -1 ;
    //temporary character type variable for swapping values
    char temp;
    //replacing starting index with last index and start moving towards the center
    //while left <right 
    while (left<right){
        //swapping left and right indexes variable
        temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        left++;
        right--;
    }
    //printing the result
    printf("After reversing the array : ");
    printf("%s", s);
    

    return 0;

}
