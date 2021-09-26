#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float ch ;
    do  //getting change owed
    {
        ch = get_float("Change owed:");
    }
    while (ch < 0.00);
    
    
    int cent = round(ch * 100); //turning to cents
    
    //calculating coins
    int cnt = 0; 
    while (cent > 0)
    {
        if (cent >= 25)
        {
            cent -= 25;
            cnt++;
        }
        else if (cent >= 10)
        {
            cent -= 10;
            cnt++;
        }
        else if (cent >= 5)
        {
            cent -= 5;
            cnt++;
        }
        else
        {
            cent -= 1;
            cnt++;
        }
    }
    
    //printing coins
    printf("%i\n", cnt);
}
