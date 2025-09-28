#include <stdio.h>
int main()
{
    // string lenght with function
    // char name[] = "Anika Tahosina Mim";
    // int len = strlen(name);
    // printf("Lenght = %d\n", len);
    // without function
    char name2[] = "Ahsan Habib Hamim";
    int i = 0, len = 0;
    while (name2[i] != '\0')
    {
        i++;
        len++;
        printf("lenght= %d\n", len);
    }

    return 0;
}