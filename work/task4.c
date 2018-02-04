#include "task4.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

char* process(char* line)
{
    char first_one = 0;
    char last_one=strlen(line)-1;
    char tmp = '\0';
    
    
    for ( first_one=0;first_one<strlen(line);first_one++ )
    {
        
        if ( isdigit(line[first_one] ) )
        {
            for (; first_one < last_one; last_one--)
            {
                if (!isdigit(line[last_one]))
                {
                    tmp = line[last_one];
                    line[last_one] = line[first_one];
                    line[first_one] = tmp;
                    last_one--;
                    break;
                    
                }
            }
        }
    }
    
    return line;
}


