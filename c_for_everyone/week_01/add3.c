#include <stdio.h>

int main(void){
    // gcc -o add3.exe add3.c    
    float a, b, c, sum;
    printf("Input three floats\n\n\n");
    scanf("%f%f%f", &a, &b, &c);
    printf("a = $f, b= %f, c=%f \n", a, b);
    sum = a+b+c;
    printf("sum %f\n\n",sum); 
    return 0;

}