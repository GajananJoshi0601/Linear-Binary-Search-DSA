#include<stdio.h>
#include<stdlib.h>

struct myArray{
    int total_size;
    int used_size;
    int *ptr;
};

// Here we are creating a new array and used ptr to create a dynamic memory to store the array numbers
void createArray(struct myArray *a, int tsize, int usize){
    (*a).total_size = tsize;
    (*a).used_size = usize;
    (*a).ptr = (int*)malloc(tsize * sizeof(int));
}


// This show method is used to show the number of elements store in an array
void show(struct myArray *a){
    for(int i = 0; i < a->used_size; i++){
        printf("%d", a->ptr[i]);
    }
}

// This setVal method is used to set the values on the array locations
void setVal(struct myArray *a){ 
    int n; 
    for(int i = 0; i < a->used_size; i++){
        printf("Enter Elements %d: ", i);
        scanf("%d",&n); 
        (a->ptr)[i] = n;
    }
}

int main(){ 
    struct myArray marks;
    createArray(&marks, 100, 20);
    printf("we are running setVal now\n ");
    setVal(&marks);
    printf("we are running show now\n ");
    show(&marks);
    return 0;
}