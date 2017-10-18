#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

int main()
{
    char *str = malloc(sizeof(char) * 100);
    fgets(str, sizeof(str), stdin);
    printf("%s\n",str);

    //while (str.compareTo("false") == 1)
     //   system("is-charging) 
    
}


