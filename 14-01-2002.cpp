#include<iostream>
#include<string.h>
using namespace std;
int main(int argc, char **argv)
{
    char str[1001];
    cin>>str;
    int len = strlen(str);
    int i , j , k = 0 , l = len , m = len/2+1, n = 1 ,c = 0;
    //cout<<"len = "<<len<<endl;
    char checkforstr[1000];
    checkforstr[0] = str[len/2]; 
    cout<<"no = "<<str[len/2]<<endl;
    for(i = l/2 - 1; i>=0; i--)
    {
        cout<<"str[i] = "<<str[i]<<" at i = "<<i<<endl;
        checkforstr[n++] = str[i];
        for(j = m ; j<len; j++)
        {
            cout<<"str[j] = "<<str[j]<<" at j = "<<j<<endl;
            checkforstr[n++] = str[j];
            //cout<<"m = "<<m<<endl;
            m++;
           
            break;
        }
        //l--;
    }
    for(i = 0 ; i<n-1 ;i++)
    {
        for(j = i+1 ; j < n ; j++)
        {
            if(str[i] == str[j])
            {
                c = j-1;
                k = 1;
                break;
            }
        }
        if(k == 1)
        break;
        c = len;
    }
    for(i = 0 ; i<c ;i++) 
    cout<<checkforstr[i]<<endl;

}