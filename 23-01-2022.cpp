#include <iostream>
#include <string.h>
using namespace std;

int main(int argc, char** argv)
{
    char str[10001] = "123471859548f3214g7410hiabc50006006de98746542";
    int n = 3;
    int i , j , k , l , m ,len = strlen(str);
    cout<<"len = "<<len<<endl;
    int r1 = 0 , r2 = 0, c1 = 0 ,c2 = 0;
    int a = len / (n * n) - 1;
    //int b = a % n;
    cout<<"a = "<<a<<endl;
    for(i = 0 ; i < len ; )
    {
        m = 0;
        if(isdigit(str[i]))
        {
            for(j = i; j < i+a ; j++)
            {
                if(isdigit(str[j]))
                {
                    k = str[j] - '0';
                    m = m * 10 + k;
                }
            }
            r1++;
            cout<<m <<" ";
            if(r1 == n)
            {
                r1 = 0;
                cout<<endl;
            }
            
            i = i +a;
        }
        else if(isalpha(str[i]))
        {
            i++;
        }
        
    }
    //cout<<endl;
    for(i = 0 ; i < len ; i++)
    {
        if(isalpha(str[i]))
        {
            c1++;
            cout<<str[i]<<" ";
        }
        if(c1 == n )
        {
            c1 = 0;
            cout<<endl;
        }
    }
}