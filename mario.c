#include <stdio.h>
#include <cs50.h>

void disp(char c, int x);

int main(void)
{
    int height;
    do
    {
        height = get_int("enter the height b/w 1 to 8:");
    }
    while (height < 1 || height > 8);

    for (int i = 0; i < height; i++)
    {
        disp(' ', height - 1 - i);
        disp('#', i + 1);
        disp(' ', 2);
        disp('#', i + 1);
        printf("\n");
    }
}
void disp(char c, int x)
{

    for (int i = 0; i < x; i++)
    {
        printf("%c", c);

    }
}