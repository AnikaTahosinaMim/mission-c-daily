#include <stdio.h>
int main()
{
    char srt[50];
    printf("Enter a sentence: ");
    gets(srt);
    int capital, small, digit, i;
    capital = small = digit = i = 0;
    while (srt[i] != '\0')
    {
        if (srt[i] >= 65 && srt[i] <= 90)
            capital++;
        else if (srt[i] >= 97 && srt[i] <= 122)
            small++;
        else if (srt[i] >= 48 && srt[i] <= 57)
            digit++;

        i++;
    }
    printf("Number of Capital letter: %d\n", capital);
    printf("Number of Small letter: %d\n", small);
    printf("Number of digit: %d\n", digit);

    return 0;
}