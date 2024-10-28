#include<stdio.h>
#include<stdlib.h>

struct myArray{
    int total_size;
    int used_size;
    int *ptr;
};


//Here we are creating a dynamic array to store the elements
void createArray(struct myArray *a, int tsize, int usize ){
    (*a).total_size = tsize;
    (*a).used_size = usize;
    (*a).ptr = (int*)malloc(tsize*sizeof(int*));
};

//Here we are printing the element that stored in an array
void show(struct myArray *a){
    for(int i=0;i< a->used_size;i++){
        printf("\n%d",a ->ptr[i]);
    }
};

// Here we are requesting the number that user have to store in an array
void setVal(struct myArray *a){
        int n;
        for(int i=0; i< a->used_size; i++){
            printf("Enter Elements %d: ", i);
            scanf("%d",&n);
            (a->ptr)[i]=n;
        }
};


// This is for main function

int main(){
    struct myArray marks;
    createArray(&marks, 100, 2);
    printf("We are running setVal now \n");
    setVal(&marks);
    printf("We are running show now ");
    show(&marks);
    return 0;
}