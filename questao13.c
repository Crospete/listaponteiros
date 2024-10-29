
#include <stdio.h>

int main()
{
    char char_x[4];
    int int_x[4];
    float float_x[4];
    double double_x[4];
    
    //Para char
    printf("Char :  x = %p; x+1 = %p;  x+2 = %p;  x+3 = %p. \n", (char *)(char_x), (char *)( char_x + 1), (char *)(char_x + 2), (char *)( char_x + 3));
    
    //Para int
    printf("Int : x = %p; x+1 = %p; x+2 = %p; x+3 = %p.\n", (int *)(int_x), (int *)(int_x + 1), (int *)(int_x + 2), (int *)(int_x + 3));
    
    //Para float
    printf("Float : x = %p; x+1 = %p; x+2 = %p; x+3 = %p.\n", (float *)(float_x), (float *)(float_x + 1), (float *)(float_x + 2), (float *)(float_x + 3));
    
    //Para double
    printf("Double : x = %p; x+1 = %p; x+2 = %p; x+3 = %p.\n", (double *)(double_x), (double *)(double_x + 1), (double *)(double_x + 2), (double *)(double_x + 3));

}
/***
 * Char :
 *  x[0] = 4092
 *  x[1] = 4093
 *  x[2] = 4094
 *  x[3] = 4095
 * 
 * Int :
 *  x[0] = 4092
 *  x[1] = 4094
 *  x[2] = 4096
 *  x[3] = 4098
 * 
 * Float:
 *  x[0] = 4092
 *  x[1] = 4096
 *  x[2] = 4100
 *  x[3] = 4104
 * 
 * Double:
 *  x[0] = 4092
 *  x[1] = 4100
 *  x[2] = 4108
 *  x[3] = 4116
 * 
 * 
 * 
 ***/
