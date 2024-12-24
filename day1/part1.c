#include <stdio.h>
#include <stdlib.h>

int compare_ints(const void *a, const void *b){
    return *(int*)a - *(int*)b;
}

int main(){

    //open file
    char filename[128];
    scanf(" %s", filename);
    FILE* fin  = fopen(filename, "r");

    //create 2 arrays //simple 1000; input 1000;
    int one[1000];
    int two[1000];

    for(int i = 0; i < 1000; i++){
        fscanf(fin, "%d %d", &one[i], &two[i]);
        //check array storage
        printf("In index i = %d, one holds %d and two holds %d.\n", i, one[i], two[i]);
    }

    //sort array numberical order - quicksort
    printf("Quicksort arrays ascending.\n");
    qsort(one, 1000, sizeof(int), compare_ints);
    qsort(two, 1000, sizeof(int), compare_ints);

    //find difference between array content in the same index and sum the differences for solution
    int sol = 0;

    for(int i = 0; i < 1000; i++){
        //check qsort worked
        printf("In index i = %d, one holds %d and two holds %d.\n", i, one[i], two[i]);
        sol += (abs(one[i]-two[i]));
    }    

    printf("Solution: %d \n", sol);
    //close file
    fclose(fin);

    return 0;
}