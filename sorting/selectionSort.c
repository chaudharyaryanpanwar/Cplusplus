#include <stdio.h>

int main(){
    int n ; 
    scanf("%d" , & n);
    int array[n];
    for (int i = 0 ; i<n ; i++)scanf("%d",&array[i]);

    //-------------------------------------------
    int temp;
    for (int i = 0; i<n-1 ; i++){
        for (int j = i+1; j<n; j++){
            if (array[i]>array[j]){
                temp = array[j];
                array[j] = array[i];
                array[i] = temp;
            }
        }
    }


    for (int i = 0 ; i<n ; i++)printf("%d ",array[i]);
    return 0 ;
}