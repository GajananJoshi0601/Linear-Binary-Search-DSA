#include<stdio.h>
#include<stdlib.h>



void display(int arr[], int size){
    for(int i = 0; i <= size; i++){
        printf("%d\n", arr[i]);
    }
    printf("\n");
}

void sortedDeletion(int arr[], int size,int index){
    for(int i = 0; i<=size ; i++){
        if(arr[i] = index){
            printf("\nDeleted the element in the array ...");
            return 0;
        }
        else{
            
        }
    }

};

int main(){
    int arr[10] = {1, 3, 4, 5, 6, 8, 10, 12};
    int size = 7, index = 4;
    display(arr, size);
    sortedDeletion(arr, size, index);
    display(arr, size);
    return 0;
}