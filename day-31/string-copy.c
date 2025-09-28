#include <stdio.h>
int main()
{
    char source[] = "C programimng";
    char target[20];
    strcpy(target, source);
    printf("source string = %s\n", source);
    printf("traget string = %s\n", target);

    return 0;
}