#include <stdio.h>
#include <stdlib.h>

int compare_ints(const void *a, const void *b){
    return *(int*)a - *(int*)b;
}

int main(){

    //open file
    FILE* fin  = fopen("simple.txt", "r");

    //create 2 arrays //simple 6; input 6;
    int one[6];
    int two[6];

    for(int i = 0; i < 6; i++){
        fscanf(fin, "%d %d", &one[i], &two[i]);
        //check array storage
        printf("In index i = %d, one holds %d and two holds %d.\n", i, one[i], two[i]);
    }

    //sort array numberical order - quicksort
    printf("Quicksort arrays ascending.\n");
    qsort(one, 6, sizeof(int), compare_ints);
    qsort(two, 6, sizeof(int), compare_ints);

    //similarity score


    //close file
    fclose(fin);

    return 0;
}