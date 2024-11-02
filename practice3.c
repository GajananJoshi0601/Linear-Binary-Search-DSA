#include<stdio.h>
#include<stdlib.h>


void display(int arr[], int size){
    for(int i = 0; i <= size; i++){
        printf("%d\n",arr[i]);
    }
    printf("\n");
};

void sortedInsertion(int arr[], int size,int  element,int capacity,int index){
    if(size>=capacity){
        return -1;
    }
    for(int i = size-1; i >= index; i--){
        arr[i+1] = arr[i];
    }
    arr[index] = element; //This is like, here we get a index as 3 and element we have as 8 "soo arr[3] = element" arr[3] = 8;  
    return 1;
};


int main(){
    int arr[100] = {1, 4, 6, 9, 12, 14};
    int size = 6, element = 8, index = 3; 
    display(arr,size);
    sortedInsertion(arr, size, element, 100, index);
    display(arr,size);
    return 0;
}