#include <stdio.h>
#include <stdlib.h>

char* reverseWords(char *str) 
{
    char *words[50];
    int count = 0;
    int i = 0;

    while (str[i] != '\0') 
    {
        while (str[i] == ' ')
        {
          i++;
        }

        if (str[i] == '\0')
        {
          break;
        }
        words[count++] = &str[i];

        while (str[i] != ' ' && str[i] != '\0')
        {
          i++;
        }

        if (str[i] != '\0') 
        {
            str[i] = '\0';
            i++;
        }
    }


    char *result =(char *)malloc(200);
    int pos = 0;

    
    for (int j = count - 1; j >= 0; j--) 
    {
        int k = 0;
        while (words[j][k] != '\0') 
        {
            result[pos++] = words[j][k++];
        }
        if (j > 0) 
        {
            result[pos++] = ' ';
        }
    }

    result[pos] = '\0';
    return result;
}

int main() 
{
    char input[] = "my name is";
    char *reversed = reverseWords(input);
    printf("Reversed = %s\n", reversed);
    free(reversed);
    return 0;
}

