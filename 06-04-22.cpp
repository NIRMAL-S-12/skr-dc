#include<iostream>
#include<string.h>
using namespace std;
int main(int argc, char **argv)
{
    char str[1001] = "abyzabyzabyz";
    int i = 0 , j = 0 , k = 0;
    int count = 0 ;
    for(i = 0 ; str[i] != '\0' ; i++)
    {
        count = 0;
        for(j = 0 ; j < i ; j++)
        {
            if(str[i] == str[j])
            {
                count++;
            }
        }
        int n = count;
        while(n--)
        {
            if(str[i] == 'z')
            str[i] = 'a';
            else
            str[i]++;
        }
        cout<<str[i];
    }
}