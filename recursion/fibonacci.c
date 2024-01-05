#include <stdio.h>
int fibonnaci(n){
    if (n==1)return 1 ; 
    else if (n==2)return 1;
    else return fibonnaci(n-1 ) + fibonnaci(n-2);
}
int main (){
    printf("%d", fibonnaci(9));
    return 0 ; 
    // 1 1 2 3 5 8 13 21 34
}