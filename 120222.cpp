#include<iostream>
#include<string.h>
using namespace std;
int fun(char *str)
{
    int len = strlen(str);
    if(str[0] != '0' && len != 1)
    {
    long int x = atoi(str);
    if(x % 25 == 0)
    {
        cout<<str<<endl;
        return 1;
    }
    }
    else if(str[0] == '0' && len == 1)
    {
        return 1;
    }
    return 0;
}
int main(int argc, char **argv)
{
    char str[] = "XX_0";
    int i = 0 , j = 0 , k = 0 , l = 0 , m = 0 , n = 0 ;
    int len = strlen(str);
    int checkfordash = 0 , checkforx = 0;
    int ans = 0;
    for(i = 0 ; str[i] != '\0' ; i++) 
    {
        if(str[i] == '_')
        {
            checkfordash = 1;
            for(j = 0 ; j < 10 ; j++)
            {
                str[i] = j + '0';
                for(k = i + 1 ; str[k] != '\0' ; k++)
                {
                    if(str[k] == 'X')
                    {
                        checkforx = 1;
                        str[k] = j + '0';
                    }
                }
                if(fun(str))
                {
                ans++;
                cout<<"ans = "<<ans<<endl;
                }
            }
        } 
        else if(str[i] == 'X')
        {
            checkfordash = 1;
            for(j = 0 ; j < 10 ; j++)
            {
                str[i] = j + '0';
                for(k = i + 1 ; str[k] != '\0' ; k++)
                {
                    if(str[k] == '_')
                    {
                        checkforx = 1;
                        str[k] = j + '0';
                    }
                }
                if(fun(str))
                {
                ans++;
                cout<<"ms = "<<ans<<endl;
                }
            }
        } 
    }
    if(checkforx == 0 && checkfordash == 0)
    {
    if(fun(str))
    ans++;
    }
    cout<<ans;
}