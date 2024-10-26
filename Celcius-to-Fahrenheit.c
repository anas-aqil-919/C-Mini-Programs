#include <stdio.h>


int main(){
    //Declare variable
    int c, f;
    
    //Take input
    printf("Enter the Celsius : ");
    scanf("%d", &c);
    
    //Calculate Fahrenheit
    f = c*(9.0/5.0) + 32;
    
    //print Fahrenheit
    printf("Fahrenheit : %d", f);
    
    return 0;
}