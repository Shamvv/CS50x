#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <wctype.h>

int main(int argc, string argv[]) //getting first two input
{
    //checking whether the number of arguments is right
    if (argc != 2)
    {
        printf("Usage: ./caesar k\n");
        return 1;
    }
    
    //checking for characters other than numbers in the key
    for (int j = 0; j < strlen(argv[1]); j++)
    {
        int n = argv[1][j];
        if (n == 0 || !isdigit(n))
        {
            printf("Usage: ./caesar k\n");
            return 1;
        }
    }
   
    { 
        if (isdigit(*argv[1]))
        {
            //converting the key to an integer
            int k = atoi(argv[1]);
            //getting the plaintext input
            string s = get_string("plaintext: ");
            printf("ciphertext: ");
       
            //printing ciphertext
            for (int i = 0 ; i < strlen(s); i++)
            {
        
                //converting and printing lowercase characters
                if islower(s[i])
                {
                    printf("%c", tolower((((s[i] - 'a') + k) % 26) + 'a'));
                }
           
                //converting and printing uppercase characters
                else if isupper(s[i])
                {
                    printf("%c", toupper((((s[i] - 'A') + k) % 26) + 'A'));
                }
         
                //printing non-alphabetical characters
                else
                {
                    printf("%c", s[i]) ;
                }
            }
       
            printf("\n");
            return 0;   
        }
    }  
}
