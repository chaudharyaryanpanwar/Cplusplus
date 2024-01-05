//Aryan panwar
//3-A 54

#include <stdio.h>
#include <stdbool.h>
// bool isfull(int front , int end){
//     return end>=max;
// }
// bool isempty(int front){
//     return (front==-1);
// }
void enqueue(int arr[] , int data, int * front ,int * end ,int max){
    // if(isfull(*end , max)!=1){
        // if (isempty(* front)==1)*front+=1;
        *end += 1;
        arr[(*end)%max] = data;
    // }else printf("Array is full enqueue is not possible");
}
void dequeue(int * front , int max){
    // if (isempty(*front)==1)printf("dequeue is not possible");
    // else 
    *front = ((*front)%max) +1; 
}
int main (){
    int queue[10];
    int front = -1;
    int end = -1;
    enqueue(queue ,5, &front , &end , 10  );
    enqueue(queue ,15, &front , &end , 10  );
    enqueue(queue ,52, &front , &end , 10  );
    enqueue(queue ,54, &front , &end , 10  );
    enqueue(queue ,35, &front , &end , 10  );
    dequeue(&front , 10);
    for (int i= front ; i<=end ; i++){
        printf("Answer is : %d\n",queue[i]);
    }
}

