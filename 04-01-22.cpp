#include<iostream>
using namespace std;
int main(int argc, char **argv)
{
    char str[1001];
    cin>>str;
    int i , a, j, k;
    for(i = 0 ; str[i] != '\0' ; i+=2)
    {
        a = str[i+1] - '0';
        //cout<<"a = "<<a<<endl;
        for(j = i+1 ; str[j] != '\0' ; j++)
        {
            if(str[i] == str[j])
            {
                k = str[j+1] - '0';
                //cout<<"k = "<<k<<endl;
                str[j+1] = abs(a-k) +'0';
                //cout<<"str[j+1] = "<<str[j+1]<<endl;
            }
        }
        for(j = 0 ; j<a; j++)
        {
            cout<<str[i]<<" ";
        }
    }
}