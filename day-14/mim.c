#include <stdio.h>
int b = 45;
int main()
{
    // int a = 34;
    // printf("it is a local variable %d\n", a);
    display();
}

    void display()
    {
        printf("it is a global variable %d\n",b);
    }


