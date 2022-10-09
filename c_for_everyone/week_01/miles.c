#include <stdio.h>

int main(void){
    int miles = 25, yards = 385;
    double kms;
    kms = 1.609 * (miles+yards / 1760.0);
    printf("\n A marathon is %lf kilometres \n\n", kms);
    return 0;
}