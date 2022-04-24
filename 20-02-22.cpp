#include<iostream>
#include<string.h>
using namespace std;
int fun(char ch, char ch1, char ch2)
{
    if(ch == 'z' && ch1 == 'e' && ch2 == 'r')
    return 4;
    else if(ch == 'o' && ch1 == 'n' && ch2 == 'e')
    return 3;
    else if(ch == 't' && ch1 == 'w' && ch2 == 'o')
    return 3;
    else if(ch == 't' && ch1 == 'h' && ch2 == 'r')
    return 5;
    else if(ch == 'f' && ch1 == 'o' && ch2 == 'u')
    return 4;
    else if(ch == 'f' && ch1 == 'i' && ch2 == 'v')
    return 4;
    else if(ch == 's' && ch1 == 'i' && ch2 == 'x')
    return 3;
    else if(ch == 's' && ch1 == 'e' && ch2 == 'v')
    return 5;
    else if(ch == 'e' && ch1 == 'i' && ch2 == 'g')
    return 5;
    else if(ch == 'n' && ch1 == 'i' && ch2 == 'n')
    return 4;
    return 0;
}
int main(int argc, char **argv)
{
    int n;
    cin>>n;
    string str[n];
    int i = 0 , j = 0 , k = 0 ;
    for(i = 0 ; i < n ; i++)
    getline(cin, str[i]);
    for(i = 0 ; i < n ; i++)
    {
        int len = str[i].size();
        for(j = 0 ; j < len ; j++)
        {
            if(isalpha(str[i][j]))
            {
                int a = fun(str[i][j], str[i][j+1], str[i][j+2]);
                for(k = 0 ; str[i][k] != '\0' ; k++)
                {
                    
                }
                j = a;
            }
        }
    }
}