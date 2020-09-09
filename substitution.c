#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

bool check_alpha(char *arg);

bool check_duplicacy(char *ar);




int main(int argc, string argv[])
{
    int count = 0;
    if (argc == 2)
    {
        for (int i = 0; i < strlen(argv[1]); i++)

        {
            count++;
        }
            if (count != 26)
            {
               printf("you must enter 26 alphabet characters\n");
            }
           else if ((check_alpha(argv[1]))==true)
            {
                if((check_duplicacy(argv[1])) == true)
                {
                   printf("you must enter 26 alphabet characters remember to enter each character only once\n");
                }
                else
                {
                   string ptext = get_string("plaintext:");
                    string s = ptext;
                    string d = argv[1];

                    for (int i = 'A'; i <= 'Z'; i++)
                    d[i - 'A'] = toupper(d[i - 'A']) - i;
                   printf("ciphertext:");

                   for(int i = 0; i < strlen(s); i++)
                   {
                       if(isalpha(s[i]))
                       {
                           s[i] = s[i] + d[s[i] - (isupper(s[i]) ? 'A' : 'a')];
                           printf("%c",s[i]);
                       }
                   }

                   printf("\n");
                   return 0;


                }
            }

            else
            {
               printf("Usage: ./substitution key\n");
            }


    }
    else
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }

}
bool check_alpha(char *arg)
{
    int count = 0;
    for (int i = 0; i < strlen(arg); i++)
    {
        if ((arg[i] >= 97 && arg[i] < 123) ||(arg[i] >= 65 && arg[i] < 91))
        {
            count++;
        }

    }
       if((count % 26) == 0)
       return true;
       else
       return false;
}
bool check_duplicacy(char *ar)
{
    int flag = -1;
    for(int i = 0; i < strlen(ar); i++)
    {
        for(int j = i + 1; j < strlen(ar); j++)
        {
            if (ar[i] == ar[j])
            flag = 10;
        }
    }
    if ((flag % 10) == 0)
    return true;
    else
    return false;
}
















