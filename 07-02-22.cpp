#include<iostream>
using namespace std;
int main(int argc, char **argv)
{
    int i , j , k , l , m , n ;
    int rows = 7;
    int p = rows * 2 - 1 , u = 1;
    k = p ;
    for(i = 1; i <= rows; i++)
    {
        for(j = 1; j <= k; j++)
        {
            if(j == p || j == k)
            cout<<"*";
            else
            cout<<"-";
        }
        for(j = 1 ; j < u - 1 ; j++)
        cout<<"-";
        p = p - 2;
        if(i!=1)
        {
            cout<<"*";
        }
        cout<<endl;
        u = u + 2;
    
    } 
}