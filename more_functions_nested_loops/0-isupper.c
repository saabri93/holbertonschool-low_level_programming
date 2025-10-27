#include <stdio.h>

int main(void)
{
    char ch1 = 'G';
    char ch2 = 'g';

    printf("%d\n", _isupper(ch1)); // Affiche : 1
    printf("%d\n", _isupper(ch2)); // Affiche : 0

    return 0;
}

