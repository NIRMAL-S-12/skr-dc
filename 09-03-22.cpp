#include<iostream>
#include<string.h>
using namespace std;
int main(int argc, char **argv)
{
    char str1[] = "code";
    char str2[] = "online";
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    int len = len1+len2;
    int t = len;
    char final[len];
    int i = 0 , j = 0, l = 0 , m = 0, k = 0;
    for(i = 0 ; str1[i] != '\0' ; i++)
    {
        if(str1[i] < str2[i])
        {
            final[k++] = str1[i];
        }
        else
        {
            final[t--] = str1[i];
        }
    }
    cout<<final;
}