#include<iostream>
#include<fstream>
#include<stdio.h>
#include<string.h>
 using namespace std;

int main()
{
    fstream f1;
    f1.open("h.c",ios::in);
    char s[200];
    char ch;
    int i=0;
    while(f1)
    {
        f1.get(ch);
        s[i]=ch;
        i++;
    }
    char * token;
    const char * del=";";
    token= strtok(s,del);
    while(token!=NULL)
    {
        printf("%s",token);
        token= strtok(NULL,del);
    }
}
