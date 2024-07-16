#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>
#include<math.h>

int main(int argc, string argv[]){

    int k;
    char p;
    string text;
    int lenght = strlen(argv[1]);
    bool check = true;


    for (int i = 0; i < lenght; i++)
    {
        if(!isdigit(argv[1][i]))
        {
            check = false;

        } else
        {
            check = true;
        }
        if(check == false)
        {
            i = lenght;
        }
    }

   if (argv[2] != 0)
   {
        printf("Usage: ./caesar key\n");
        return 1;
    } else if (check == false)
        {
            printf("Usage: ./caesar key\n");
            return 1;
        } else
            {
              k = atoi(argv[1]);
              //printf("A chave é: %i\n", k*2);
              text = get_string("Plaintext: ");
              //printf("O texto é: %s\n", text);
              for (int j = 0; j < strlen(text); j++)
              {
                if (isalpha(text[j]) != 0)
                {
                    text[j] = text[j];
                } else {
                    text[j] = text[j];
                }
                if (isupper(text[j]) != 0)
                {
                    p = text[j] - 65;
                    text[j] = (p + k) % 26;
                    text[j] = text[j] + 65;
                }
                if (islower(text[j]) != 0)
                {
                    p = text[j] - 97;
                    text[j] = (p + k) % 26;
                    text[j] = text[j] + 97;
                }
              }
              printf("Ciphertext: %s\n", text);
              return 0;
            }
}
