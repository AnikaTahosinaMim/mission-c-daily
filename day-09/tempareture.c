#include <stdio.h>

/*
cintigrade to fahrenheit;
F = (c*1.8)+32;
fahrenheit to cintigrade;

c = (f-32)/1.8;
*/
int main (){
    // float c,f;
    // printf("Enter a cintigrade temperature: ");
    // scanf("%f",&c);
    // f =(1.8*c)+32;
    // printf("The fahren temparature is = %.2f",f);
    
    float c2,f2;
    printf("Enter a fahrenheit temperature: ");
    scanf("%f",&f2);
    c2 =(f2-32)/1.8;
    printf("The cintigrade temparature is = %.2f",c2);
    return 0;
}
