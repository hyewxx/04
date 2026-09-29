#include <stdio.h>

int main (void){

    int i, j;
    
    printf("input two integers : ");
    scanf("%i %i", &i, &j);

    printf("+ result is %d \n", i + j);
    printf("- result is %d \n", i - j);
    printf("* result is %d \n", i * j);
    printf("/ result is %d \n", i / j);
    printf("%% result is %d \n", i % j);

    return 0;

}