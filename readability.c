#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

//to count letters
float count_letters(int len, string text);
//to count words
float count_words(int len, string text);
//to count sentences
float count_sentences(int len, string text);

int main(void)
{
    string text = get_string("Text: ");
    //to get length of text
    int le = strlen(text);
    int l = count_letters(le, text);
    int w = count_words(le, text);
    int s = count_sentences(le, text);
    float L = ((float) l * 100.00 / (float) w);
    float S  = ((float) s * 100.00 / (float) w);
    //plugging values into the formula
    float grade = (0.0588 * L - 0.296 * S - 15.8);
    int index = round(grade);

    //printing index
    if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", index);
    }
}

float count_letters(int len, string text)
{
    int letters = 0;
    for (int i = 0; i < len ; i++)
    {
        if isalnum(text[i]) //checking for letters
        {
            letters++;
        }
    }
    return letters ;
}

float count_words(int len, string text)
{
    int words = 1;
    for (int j = 0; j < len ; j++)
    {
        if (isspace(text[j])) //checking for spaces
        {
            words++;
        }
    }
    return words ;
}

float count_sentences(int len, string text)
{
    int sentences = 0;
    for (int k = 0; k < len ; k++)
    {
        if (text[k] == '.' || text[k] == '!' || text[k] == '?') //checcking for punctuation
        {
            sentences++;
        }
    }
    return (sentences) ;
}
