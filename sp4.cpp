#include<iostream>
#include<fstream>
#include<string.h>

using namespace std;

int main()
{
    int i=0,j=0,k=0,e=0;
    char f[100],ch,s[100];
    char op[]="+-/*%",re[]="<,>,=,<=,>=";
    fstream f1;


        char * token1;
        const char * del=",";
        token1= strtok(re,del);



    cout<<"Enter a file name";
    cin>>f;
    f1.open(f,ios::in);
    while(f1)
    {
        f1.get(ch);
        s[k]=ch;
        char *token=strtok(s,";");
        while(token!=NULL)
        {
        const char *c=token;
        if(c[e]>='a' &&  c[e]<='z')
        {
          cout<<"identifier = "<<c[e]<<"\n";
        }

        for(j=0;j<=10;j++)
        {
        if(c[e]==op[j])
        {
            cout<<"operator = "<<c[e]<<"\n";
        }
        }
        while(token1!=NULL)
        {
            const char *cc=token;
        if(c[e]==cc[i])
        {
            cout<<"relation = "<<c[e]<<"\n";
        }
        i++;
        token1= strtok(NULL,del);
        }
        token= strtok(NULL,";");
        }
        e++;
        k++;


    }
}
