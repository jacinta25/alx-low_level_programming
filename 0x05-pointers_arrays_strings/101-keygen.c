#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_PASS_LENGTH 100

int main(void)
{
    int pass[MAX_PASS_LENGTH] = {0};
    int i, sum, n;
    char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+{}[]<>?/";

    sum = 0;	
    srand(time(NULL));

    for (i = 0; i < MAX_PASS_LENGTH; i++)
    {
        pass[i] = charset[rand() % (sizeof(charset) - 1)];
        sum += pass[i];
        putchar(pass[i]);
        if ((2772 - sum) < (MAX_PASS_LENGTH - i) * 33)
        {
            n = 2772 - sum;
            sum += n;
            putchar(n);
            break;
        }
    }

    return (0);
}
