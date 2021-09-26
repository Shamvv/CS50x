#include <cs50.h>
#include <stdio.h>

int main(void)
{

    int height;

    do
    {
        height = get_int("Height: ");
    }
    while (height > 8 || height < 1);

    for (int m = 0; m < height; m++)
    {
        
        //print left spaces
        
        for (int space = height - m - 2; space >= 0; space--)
        {
            printf(" ");
        }
        
        //print left hashes

        for (int hash = 0; hash <= m; hash++)
        {
            printf("#");
        }
        
        //print middle gap
        printf("  ");
        
        //print right hashes
        
        for (int rhash = 0; rhash <= m; rhash++)
        {
            printf("#");
        }
        
        printf("\n");
        
    }


}
