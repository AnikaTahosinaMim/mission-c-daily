#include <stdio.h>
int main()
{
    char n[] = "Tahosina";
    int i = 0;
    while (n[i] != '\0')
    {
        printf("%c\n", n[i]);
        i++;
    }

    return 0;
}