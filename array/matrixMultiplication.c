//Aryan Panwar
//3A - 54

//matrix Muyltiplication 
#include <stdio.h>
int main (){
    int rows1 , columns1 ;
    //asking the size of array1 frin the user
    printf("enter the rows and columns of 1st array :\n");
    scanf("  %d %d" , &rows1 , &columns1);
    //creatin array of the required size
    int arr1[rows1][columns1];
    //entering values in the first array
    printf("enter values in 1st array\n");
    for (int i= 0 ; i<rows1 ; i++){
        for (int j = 0 ; j<columns1 ; j++){
            scanf("%d", &arr1[i][j]);
        }
    }
    int rows2 , columns2 ;
    printf("enter the rows and columns of 2nd array :\n");
    //declaring 2nd array 
    scanf("  %d %d" , &rows2 , &columns2);
    int arr2[rows2][columns2];
    //entering values in aray 2 
    printf("enter values in 2nd array\n");
    for (int i= 0 ; i<rows2 ; i++){
        for (int j = 0 ; j<columns2 ; j++){
            scanf("%d", &arr2[i][j]);
        }
    }
    if (columns1!=rows1)printf("Multiplicatio is not possible");
    else {
        //creating the resultant matrix 
        int arr3[rows1][columns2];
        int temp ; 
        int sum = 0 ;
        for (int i= 0 ; i<rows1 ; i++){
            //for traversing rows of 3ds array
            for (int j = 0; j<columns2 ; j++){
                //for traversing columns of 3 d array
                for (int k = 0 ; k<columns1; k++){
                    //for traversing into elements of 1st and 2nd array


                    //this will add all values when arr1 row elements will be 
                    //multiplied to the column elements
                    //and will be stored in sum 
                    //which later can be stored in the resultant array
                    sum += arr1[i][k]*arr2[k][j];
                }
                arr3[i][j] = sum;
                //changing the value of sum = 0 for next turn 
                sum = 0 ; 
            }
        }
        //printing 3rd array
        printf("printing 3d aray : \n");
        for (int i = 0 ; i<rows1 ; i++){
            for (int j = 0 ; j<columns2 ; j++){
                printf("%d\t",arr3[i][j]);
            }
            printf("\n");
        }
    
    }
    return 0;
}