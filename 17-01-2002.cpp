#include<iostream>
#include <string.h>
using namespace std;
int main(int argc, char** argv) 
{
    char str[10001] = "123 1234 4556", str2[10001] = "2456 1123 3563";
    //cin.getline(str,10001);
    cout<<str<<endl<<str2<<endl;
    int i , j = 0 , k , l = 0 , m = 0 , c = 0, n = 0 , len1 = strlen(str), len2 = strlen(str2);
    int arr[1000] , arr2[1001];
    char ch[1001] , ch2[1001];
    for(i = 0 ;str[i] !='\0' ; i++)
    {
        //cout<<" str[i] " << str[i] << endl;
        if(!(isspace(str[i])))
        {
            ch[c++] = str[i];
        }
        else
        {
            arr[n++] = stoi(ch);
            c = 0 ;
        }
    }
    arr[n++] = stoi(ch);
    for(i = 0 ;str2[i]!='\0' ; i++)
    {
        //cout<<" str2[i] " << str2[i] << endl;
        if(!(isspace(str2[i])))
        {
            ch2[l++] = str2[i];
        }
        else
        {
            arr2[m++] = stoi(ch2);
            l = 0 ;
        }
    }
    arr2[m++] = stoi(ch2);
    int digitsinarr[10] = {0} , digitsinarr2[10] = {0};
    if(n == m)
    {
        for(i = 0; i < n; i++)
        {
            k = arr[i];
            while(k!=0)
            {
                j = k%10;
                digitsinarr[j]++;
                k = k / 10;
            }
        }
        for(i = 0; i < m; i++)
        {
            k = arr2[i];
            while(k!=0)
            {
                j = k%10;
                digitsinarr2[j]++;
                k = k / 10;
            }
        }
        for(i = 0 ; i<10 ; i++)
        {
            if(digitsinarr[i] > 0 )
            cout<<"digitsinarr[i] = "<<digitsinarr[i]<<endl;
            if(digitsinarr2[i] > 0 )
            cout<<"digitsinarr2[i] = "<<digitsinarr2[i]<<endl;
        }
        for(i = 0 ; i<10; i++)
        {
            if(digitsinarr[i] == digitsinarr2[i])
            {
                j = 1;
            }
            else
            {
                cout<<"NO";
                return 0;
            }
        }
        if(j==1)
        cout<<"YES";

    }
    else
    {
        cout<<"NO";
    }
    
}