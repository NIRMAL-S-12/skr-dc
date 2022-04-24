#include <iostream>
#include <string.h>
using namespace std;

int checkPrime(int n)
{
    int i = 0 , j = 0 , k = 0 ;
    if(n == 0 || n == 1)
    {
        return 0;
    }
    for(i = 2 ; i <= n /2 ; i++)
    {
        if(n % i == 0) 
        return 0;
    } 
    return 1;
}
int checkAlmostPrime(int arr[1001] , int m, int skip)
{
    int i = 0 , j = 0 , k = 0 , l = 0 ;
    for(i = 0 ; i < m ; i++)
    {
        if(i != skip)
        k += arr[i];
    }
    //cout<<k<<endl;
    if(checkPrime(k))
    return 1;
    return 0;
}
int main(int argc, char **argv)
{
    char str[1001] = "d";
    int i = 0, j = 0, k = 0, l = 0, m = 0, n = 0,sum = 0;
    int arr[1001];
    int len = strlen(str);
    for (i = 0; i < len + 1; i++)
    {
        str[i] = tolower(str[i]);
        if(isspace(str[i]) || i == len )
        {
            arr[m++] = sum;
            sum = 0;
        }
        if (isalpha(str[i]))
        {
            k = str[i] - '0' - 48;
            sum = sum + k;
        }
        else if(isdigit(str[i]))
        {
            k = str[i] - '0';
            sum = sum + k;
        }
        else 
        {
            k = 0 ;
        }

    }
    int total = 0 , check = 0 ,skip = 0 ;
    for(i = 0 ; i < m ; i ++)
    {
       cout<<arr[i]<<endl;
        total += arr[i];
    }
    if(checkPrime(total))
    {
        check = 1;
        cout<<"Prime";
    }
    else
    {
        for(i = 0 ; i < m ; i++)
        {
            if(checkAlmostPrime(arr, m , skip))
            {
                check = 1;
                cout<<"ALMOST PRIME"<<endl;
                break;
            }
            else
            {
                skip++;
            }
        }
    }
    if(check == 0)
    cout<<"Composite";
    
}