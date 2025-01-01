#include <stdio.h>
#include <stdlib.h>

int compare_ints(const void *a, const void *b){
    return *(int*)a - *(int*)b;
}

int main(){

    //open file
    FILE* fin  = fopen("input.txt", "r");

    //create 2 arrays //simple 1000; input 1000
    int one[1000];
    int two[1000];

    for(int i = 0; i < 1000; i++){
        fscanf(fin, "%d %d", &one[i], &two[i]);
    }

    //sort array numberical order - quicksort
    printf("Quicksort arrays ascending.\n");
    qsort(one, 1000, sizeof(int), compare_ints);
    qsort(two, 1000, sizeof(int), compare_ints);

    //Array
    int* twoL = calloc(100000, sizeof(int));

    //similarity score
    for(int i = 0; i < 1000; i++){
        twoL[two[i]-1]++;
    }
    int score = 0;
    for(int i = 0; i < 1000; i++){
        printf("%d - oneL: %d, twoL: %d\n", i, one[i], twoL[one[i]-1]);
        score += (one[i]*twoL[one[i]-1]);
    }
    printf("score: %d\n", score);

    //close file
    fclose(fin);
    //free memory - only dynamic memory
    free(twoL);

    return 0;
}