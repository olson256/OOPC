#include<stdio.h>
#include<string.h>

void main()
{
    char s[]="hello world; hi there";
    char * token;
    const char * del=";";
    token= strtok(s,del);
    while(token!=NULL)
    {
        printf("%s",token);
        token= strtok(NULL,del);
    }
}
