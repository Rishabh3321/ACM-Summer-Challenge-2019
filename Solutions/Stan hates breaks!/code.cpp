#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    char re = (char)92;
    char str[100001];
    gets(str);

    for(long long int i=0;str[i]!='\0';i++)
    {
        if(str[i]== ' ')
            str[i]=re;
    }
    cout<<str;
}
