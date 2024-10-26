#include <stdio.h>


int main(){
    //declare variable
    float p,r,si;
    int t;

    //take value input
    printf("Enter principal : ");
    scanf("%f", &p);
    
    printf("Enter rate : ");
    scanf("%f", &r);

    printf("Enter time : ");
    scanf("%d", &t);

    //calculate si
    si = (p*r*t)/100;

    //print si
    printf("SI = %f", si);

    return 0;
}