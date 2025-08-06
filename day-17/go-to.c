#include <stdio.h>
int main(){
    int i=1;
    mim:
    printf("%d\t",i);
    i++;
    if(i<10)
    goto mim;
    return 0;
}