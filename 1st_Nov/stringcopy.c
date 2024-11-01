#include <stdio.h>
char * strcopy(char *dest_string, char *source_string)
{
    if (*source_string == '\0')
    {
        *dest_string = '\0'; 
        return dest_string;
    } 
else
 {
        *dest_string = *source_string; 
        return strcopy(dest_string + 1, source_string + 1); 
    }
}
int main() 
{
    char source_string[] = "Hello World!";
    char dest_string[50]; 
    strcopy(dest_string, source_string); 

    printf("Source String: %s\n", source_string);
    printf("Destination String: %s\n", dest_string);
    return 0;
}