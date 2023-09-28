#include <stdio.h>

void Pattern(char ch, int h);

int main()
{
    printf("Please enter the height of the pattern:");
    int h;
    scanf_s("%d", &h);
    Pattern('*', h);
    return 0;
}

void Pattern(char ch, int h)
{
    for (int i = h; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%c", ch);
            if (j == i)
            {
                printf("\n");
            }
        }
    }
}