#include <cs50.h>
#include <stdio.h>

int main(void)

{
    int start_size; //To get the start size
    do
    
    {
        start_size = get_int("Start size:");
    }
    
    while (start_size < 9);
    
    int end_size; //To get the end size
    do
    
    {
        end_size = get_int("End size:");
    }
    
    while (end_size < start_size);
    
    int year = 0; //To get number of years
    while (end_size > start_size)
    {
        start_size = start_size + (start_size / 3) - (start_size / 4);
        year++;
    }
        
    
    printf("Years: %i\n", year);
}
