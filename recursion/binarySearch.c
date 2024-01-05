#include <stdio.h>
int binarySearch(int array[] , int s , int e , int target){
    if (s>e)return -1;
    int mid = s + (e - s)/2;
    if (array[mid]==target)return mid;
    else if (array[mid]<target)return binarySearch(array , mid+1 , e, target);
    else return binarySearch(array ,s , mid-1, target);
}
int main (){
    int n ; 
    scanf("%d" , &n);
    int array[n];
    for (int i = 0; i<n ; i++)scanf("%d" , &array[i]);
    //--------------------------------------------------//
    int target;
    scanf("%d" , &target);
    printf("%d", binarySearch( array , 0 , n-1 , target));
    return 0 ; 
}