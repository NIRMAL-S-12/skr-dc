#include <bits/stdc++.h>
using namespace std;

int fun2calc(char *str)
{
    long int x = atoi(str);
    if(x % 25 == 0)
    return 1;
    return 0;
}
int main(int argc, char** argv)
{
    char str[] = "8_XX";
    int i = 0 , j = 0 , k = 0 , l = 0 , m = 0 , n = 0 ;
    int len = strlen(str);
    if(str[0] == '0' && len == 1)
    {
        cout<<"1";
        return 0;
    }
    else if(str[0] == '0' && len != 1)
    {
        cout<<"0";
        return 0;
    }
    for(i = 0 ; str[i] != '\0' ; i++)
    {
        if(str[i] == 'X')
        {
            str[i] = '0';
        }
    }
    for(i = 0 ; str[i] != '\0' ; i++)
    {
        if(str[i] == '_')
        {
            if(i != 0)
            {
                for(j = 0 ; j < 10; j++)
                {
                    str[i] = j + '0';
                    if(fun2calc(str))
                    k++;
                }
            }
            else
            {
                for(j = 1 ; j < 10 ; j++)
                {
                    str[i] = j + '0';
                    if(fun2calc(str));
                    k++;
                }
            }
        }
    }
    cout<<k;


}