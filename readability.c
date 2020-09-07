#include <stdio.h>
#include <cs50.h>
#include <string.h>

int letters(char *l);

int words(char *w);

int sentence(char *s);

int roundNo(float num);




int main(void)
{
    string Text = get_string("Text:");
    int l = letters(Text);

    int w = words(Text);

    int s = sentence(Text);

    float L, S;
    L = l * 100 / w;
    S = s * 100/w;
    float index = 0.0588 * L - 0.296 * S - 15.8;
    int I = roundNo(index);
    if(I < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    if(I >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n",I);
    }

}

int letters(char *l)
{

    int let = 0;
    for(int i = 0; i < strlen(l); i++)
    {
        if((l[i] >= 32 && l[i] < 48) || (l[i] >= 58 && l[i] < 65 ) || (l[i] >= 91 && l[i] < 97))
        {
        let+=0;
        }
        else
        {
        let++;
        }
    }
    return let;

}
int words(char *w)
{

    int wor = 0;
    for(int i = 0; i < strlen(w); i++)
    {
        if(w[i]==' ')
        {
        wor++;
        }
        else
        {
        wor+=0;
        }
    }
    return wor+1;

}
int sentence(char *s)
{

    int sen = 0;
    for(int i = 0; i < strlen(s); i++)
    {
        if(s[i] == 33 || s[i] == 46 || s[i] == 63)
        {
        sen++;
        }
        else
        {
        sen+=0;
        }
    }
    return sen;

}
int roundNo(float num)
{
    return num < 0 ? num - 0.5 : num + 0.4;
}