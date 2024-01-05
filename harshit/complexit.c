#include <stdio.h>

int main (){
    int n;
    scanf("%d", &n);
    int array[n];
    for (int i = 0 ; i< n ; i++){
        scanf("%d", &array[i]);
    }
    // 1 2 3 4 5 
    // 4 5 2 3 1
    // 4 5 
    // 
    for (int i = 0 ; i<n ; i++){
        int temp = array[i];
        int j ; 
        for (j = i; j>=0 ; j--){
            if (array[j]>temp){
                break;
            }
        }
        for (j  ; j<i ; j++){
            array[i-j] = array[i-j+1];
        }
    }
}