#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <string.h>

int main()
{
    char *str = malloc(sizeof(char) * 100);
    fgets(str, sizeof(str), stdin);
    printf("%s\n",str);
    char *found = strstr(str, "false");

    if(found)
    {
        system("afplay crazyAlaram.wav");
    }
}


