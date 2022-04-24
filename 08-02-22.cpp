#include<iostream>
#include<string.h>
using namespace std;
int main(int argc, char **argv)
{
    int total , i = 0 , j = 0 , k = 0 , first = 0 , second = 0 , word = 0 ;
    cin>>total ;
    string str[1000];
    int par[total], nopar[total];
    int freq[100] = {0};
    int len = 0;
    for(i = 0 ; i < total ; i++)
    {
        first = second = 0;
        cin>>str[i];
        len = str[i].size();
        if(str[i][0] == '(')
        freq[i] = 1;
        else
        freq[i] = 2;
        for(j = 0 ; j < len ; j++)
        {
            if(str[i][j] == '(')
            {
                j++;
                word = 0;
                while(str[i][j] != ')')
                {
                    word = word * 10 + str[i][j] - '0';
                    j++;
                }
            }
            else
            {
                first = first * 10 + str[i][j] - '0';
            }
        }
        nopar[i] = word;
        par[i] = first;
    }
    for(i = 0 ; i < total ; i++) 
    {
        int m = i;
        for(j = i + 1; j < total ; j++)
        {
            if(par[j] > par[m])
            {
                m = j;
            }
        }
            int temp = par[i];
            par[i] = par[m];
            par[m] = temp;
    }
    for(i = 0 ; i < total ; i++)
    {
        int m = i ;
        for(j = i + 1; j < total ; j++) 
        {
            if(nopar[j] < nopar[m])
            m = j;
        }
            int temp = nopar[i];
            nopar[i] = nopar[m];
            nopar[m] = temp; 
    }
    for(i = 0 ; i < total ; i++)
    {
        if(freq[i] == 1)
        {
            cout<<"("<<nopar[i]<<")"<<par[i]<<" ";
        }
        else
        {
            cout<<par[i]<<"("<<nopar[i]<<")"<<" ";
        }
    }
}