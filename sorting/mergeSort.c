#include <stdio.h>
#include <stdlib.h>
void merge(int arr[] , int s, int e){
    int mid = (s+e)/2;

    int len1 = mid - s+ 1;
    int len2 = e- mid;

    int * first = (int * )malloc(len1 * sizeof(int));
    int *second = (int * )malloc(len2 * sizeof(int));

    int mainArrayIndex = s ; 
    for (int i = 0; i<len1 ; i++){
        first[i]=arr[mainArrayIndex++];
    }

    mainArrayIndex = mid +1;
    for (int i = 0; i<len2 ; i++){
        second[i] = arr[mainArrayIndex++];
    }

    //merge two sorted arrays
    int index1 = 0; 
    int index2 = 0; 
    mainArrayIndex = s ; 
    while (index1 < len1 && index2 <len2){
        if (first[index1] < second[index2]){
            arr[mainArrayIndex++] =first[index1++];
        }
        else {
            arr[mainArrayIndex++] = second[index2++];
        }
    }
    while (index1 <len1){
        arr[mainArrayIndex++] =first[index1++];
    }
    while (index2 < len2){
        arr[mainArrayIndex++] = second[index2++];
    }
    free(first);
    free(second);
}
void mergeSort(int arr[] , int s  , int e){
    if (s>=e)return ;
    int mid = (s+e)/2;

    mergeSort(arr , s , mid);
    mergeSort(arr , mid+1 , e);
    merge(arr , s, e);
    
}
int main(){
    int n ; 
    scanf("%d" , & n);
    int array[n];
    for (int i = 0 ; i<n ; i++)scanf("%d",&array[i]);

    //-------------------------------------------
    mergeSort(array , 0 , n-1);
    for (int i = 0; i<n ; i++)printf("%d ",array[i]);
    
    return 0 ;
}