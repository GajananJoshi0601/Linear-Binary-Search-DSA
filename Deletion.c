#include<stdio.h>
#include<stdlib.h>

void display(int arr[], int size){
    for(int i = 0; i <= size; i++){
        printf("%d\n", arr[i]);
    };
    printf("\n");
};

void sortedDeletion(int arr[],int size, int index){
        for(int i = index; i < size; i++){
            arr[i] = arr[i+1];
        }
};

int main(){
    int arr[10] = {1, 4, 6, 8, 10, 14};
    int size = 5, index = 0;
    display(arr, size);
    sortedDeletion(arr, size, index);
    size -= 1;
    display(arr, size);
    return 0;
}