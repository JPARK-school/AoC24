#include <stdlib.h>
#include <stdio.h>

int main(){
    int safeCount = 0;
    FILE* fin = fopen("simple.txt", "r");
    //check whole file
    int c;
    while((c = fgetc(fin) != EOF)){
        //check line by line
        
        if()
    }
    //return safe count    
    printf("Safe count: %d", safeCount);
}
