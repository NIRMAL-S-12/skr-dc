#include<iostream>
#include<string.h>
using namespace std;
int main(int argc, char *argv[])
{
    int n;
    cin>>n;
    int i,k,j,t,temp;
    char str[n][1000];
    for(i = 0; i < n; i++)
    {
        cin>>str[i];
    }
    int sum = 0 , c = 1;
    temp = str[0][0] - '0';
    for(i = 0; i < n - 1; i++)
    {
        t = 0;
        int len = strlen(str[i]) , u = 0;
        char string[10000];
        for(j = 1 ; j < len ; j++)
        {
            t = t * 10 + str[i][j] - '0'; 
        }
        u = 0;
        for(k = c; k < len ; k++)
        {
            u = str[k][0] - '0';
           // cout<<"u = "<<u<<endl;
            break;
        }
        t = t * 10 + u;
        cout<<"t = "<<t<<endl;   
        c++;
    }
    for(j = 1 ; j < n ; j++)
        {
            t = t * 10 + str[n-1][j] - '0'; 
        }
        cout<<"t = "<<t<<endl;
}