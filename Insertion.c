#include<stdio.h>
#include<stdlib.h>


void display(int arr[],int size){
    for(int i = 0 ; i < size; i++){
        printf("%d\n", arr[i]);
    }
    printf("\n");
};
// tera chschra
void sortedInsertion(int arr[], int size , int element, int capacity, int index){
    if(size>=capacity){
        return -1;
    }
    for(int i = size-1; i>=index ;i--){
        arr[i+1] = arr[i];
    }
    arr[index] = element;
    return 1;
}

int main(){
    int arr[100] = {1, 17, 20, 23, 50, 55};
    int size = 6, element = 45, index = 4;
    display(arr, size);
    sortedInsertion(arr, size, element, 100, index); 
    size += 1;
    display(arr, size);
    return 0;
}