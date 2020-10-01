//Hello

#include <cs50.h>
#include <stdio.h>

string hash(int);

int main(void)
{
    int a;
    do
    {
        a = get_int("Height: ");
    }
    while (a < 0 || a > 8);
    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < a-1-i; j++)
        {
            for(int j = 0; j < i+1; j++)
            {
                printf(".");
            }
            printf("#");
        }
        printf("\a");
    }


}