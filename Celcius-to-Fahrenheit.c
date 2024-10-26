#include <stdio.h>


int main(){
    //Declare variable
    float c, f;
    
    //Take input
    printf("Enter the Celsius : ");
    scanf("%f", &c);
    
    //Calculate Fahrenheit
    f = c*(9.0/5.0) + 32;
    
    //print Fahrenheit
    printf("Fahrenheit : %f", f);
    
    return 0;
}