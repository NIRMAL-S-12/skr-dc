#include<iostream>
#include<string.h>
using namespace std;

int isVow(char ch)
{
    if(ch == 'A' || ch == 'a' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch =='O' || ch == 'u' || ch == 'U')
    return 1;
    return 0;
}
int main(int argc, char **argv)
{
    char str[1001];
    cin>>str;
    int i = 0 , j = 0 , k = 0 , l = 0 , m = 0 , n = 0 ;
    int len = strlen(str);
    char con[1001];
    for(i = 0 ; i < len ; i++)
    {
        if(isVow(str[i]) == 0)
        {
            con[k++] = str[i];
        }
    }
    char res[1001];
    l = 1;
    for(i = 0 ; i < len ; i++)
    {
        if(isVow(str[i]) == 0)
        {
            if(l == k)
            l = 0;
            res[j++] = con[l++];
        }
        else
        {
            res[j++] = str[i];
        }
    }
    cout<<res;

}