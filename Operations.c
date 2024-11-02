#include<stdio.h>
#include<stdlib.h>

void display(int arr[], int size){
    for(int i = 0; i < size; i++){
        printf("%d\n", arr[i]);
    }
    printf("\n");
}

void sortedInsertion(int arr[],int size,int element,int index){
    for(int i = size-1; i >= index; i--){
        arr[i+1] = arr[i];      //Here if we set arr[i=1] = arr[i] then it will remove the element at index = 2 and set element value to it.
    }
    arr[index] = element;
    return 1;
};

void sortedDeletion(int arr[], int size, int index){
    for(int i = index; i < size; i++){
        arr[i]= arr[i+1];
    }
};

int main(){
    int arr[100] = {1, 3, 5, 7, 8, 12, 15};
    int size = 6, element = 45, index = 2;
    int choice=0;
    printf("\n1. Traversing ");
    printf("\n2. Insertion ");
    printf("\n3. Deletion ");
    printf("\nEnter Your choice : ");
    scanf("%d", &choice);
    switch(choice){
        case 1 :{
            printf("Traversing in the array : ");
            display(arr, size);
            break;
        } 

        case 2 : {
            printf("Before Insertion in the array : ");
            display(arr, size);
            printf("After Insertion in the array : ");
            sortedInsertion(arr, size, element, index);
            size += 1;
            display(arr, size);
            break;
        }

        case 3 : {
            printf("Before Deletion in the array : ");
            display(arr, size);
            printf("After Deletion in the array : ");
            sortedDeletion(arr, size, index);
            size -= 1;
            display(arr, size);
            break;
        } 

        default:
            printf("You have enterred the wrong choice please try again later .... ");

    }
    return 0;
}