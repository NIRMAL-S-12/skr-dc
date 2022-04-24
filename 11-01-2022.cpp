#include<iostream>
using namespace std;
int main(int argc, char **argv)
{
    int n = 5;
    char ch1 = 'a' , ch2 = 'c';
    int i , j , k=0 , l , m,s;
    int temp = n;
    for(i = 1 ; i< n; i++)
    {
        for(s = 1; s<=n-i;s++)
        {
            cout<<"*";
        }
        for(k = 2*i-1; k>=1; k--)
        {
            
            if(k==1)
            cout<<"a";
            else if(k == 2*i-1)
            cout<<"c";
            else
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<"c ";
    for(i = 1; i<=n-1; i++) 
    cout<<"b ";
}