#include<stdio.h>
#include<stdlib.h>

int linearSearch(int arr[], int size, int element){
    for(int i = 0; i < size; i++){
        if(arr[i] == element)
            return i;
    }
    return -1;
}

int binarySearch(int arr[], int size, int element){
    int low, mid, high;
    low = 0;
    high = size - 1;

    while(low<=high){
        mid = (low + high)/ 2;
        if(arr[mid] == element){
            return mid;
        }
        if(arr[mid] < element){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return -1;   
}

int main(){
    int arr[] = {1, 2, 4, 5, 7, 8, 10};
    int size =  sizeof(arr)/sizeof(int);
    int element, choice = 0;
    printf("\n1. Linear Search");
    printf("\n2. Binary Search");
    printf("\nEnter the element you want to search : ");
    scanf("%d", &element);
    printf("\nEnter your choice : ");
    scanf("%d",&choice);
    int searchIndex = -1;

    switch(choice){
        case 1 : 
            printf("Linear Search Algorithm : ");
            searchIndex = linearSearch(arr, size, element); 
            // printf("The element %d is found at index %d \n", element, searchIndex);
            break;

        case 2 :
            printf("Binary Search Algorithm : ");
            searchIndex = binarySearch(arr, size, element); 
            // printf("The element %d is found at index %d \n", element, searchIndex);
            break;
        
        default : 
            printf("You have entered the wrong choice please try again later .. .. ... ");

    };
    if(searchIndex != -1){
        printf("The element %d is found in the arrray at index %d", element, searchIndex);
    }
    else{
        printf("The element %d is not found in the arrray", element);
    }
    return 0;
}
