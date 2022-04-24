#include<iostream>
#include<string.h>
using namespace std;
int main(int argc, char **argv)
{
    char str1[1001] = "four ten history";
    char str2[1001] = "tent was damaged";
    char string1[1001][1001], string2[1001][1001];
    int i = 0 , j = 0 , x = 0, y = 0 , z = 0, k = 0 , l = 0 , m = 0 , n = 0 ;
    int len1 = strlen(str1), len2 = strlen(str2);
    for(i = 0 ; i < len1 + 1; i++)
    {
        if(str1[i] == ' ' || i == len1 )
        {
            string1[k][l++] = '\0';
            k = k+1 ;
            l = 0 ;
        }
        else
        {
            string1[k][l++] = str1[i];
        }
    }
    for(i = 0 ; i < len2 + 1; i++)
    {
        if(str2[i] == ' ' || i == len2 )
        {
            string2[m][n++] = '\0';
            m = m+1 ;
            n = 0 ;
        }
        else
        {
            string2[m][n++] = str2[i];
        }
    }
    if(k != m)
    {
        cout<<"NO";
        return 0;
    }
    for(i = 0 ; i < k ; i++)
    {
        if(strlen(string1[i]) != strlen(string2[i]))
        {
            cout<<"NO";
            return 0;
        }
    }
    int freq[k];
    for(i = 0 ; i < k ; i++)
    {
        char tempstr1[1001] , tempstr2[1001] ;
        strcpy(tempstr1, string1[i]);
        strcpy(tempstr2, string2[i]);
        for(x = 0 ; tempstr1[x] != '\0' ; x++)
        {
            for(y = 0 ; tempstr2[y] != '\0' ; y++)
            {cout<<"tempstr1[x] : "<<tempstr1[x]<<"   : "<<"tempstr2[y] : " <<tempstr2[y]<<endl;
                if(tempstr1[x] == tempstr2[y])
                {
                    cout<<"NO";
                    return 0;
                }
            }
        }
    }
    cout<<"YES";
}