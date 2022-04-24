#include<iostream>
#include<string.h>
using namespace std;
char globstring[1001];
int fun(char first, char second)
{
    int firstHere = 0 , secondHere = 0;
    for(int i = 0 ; globstring[i] != '\0' ; i++)
    {
        if(first == globstring[i])
        {
            firstHere = i;
        }
        if(second == globstring[i])
        {
            secondHere = i;
        }
    }
    //cout<<abs(firstHere- secondHere)<<endl;
    return abs(firstHere - secondHere);
}
int main(int argc, char **argv)
{
    char string1[1001] = "zyxwvutsrqponabcdefghijklm";
    char string2[1001] = "bookkeeper";
    strcpy(globstring, string1);
    int sum = 0;
    for(int i = 0 ; i < strlen(string2) - 1; i++)
    {
        sum += fun(string2[i], string2[i+1]);
    }
    cout<<sum<<endl;
}