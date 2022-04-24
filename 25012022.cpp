#include<iostream>
#include<string.h>
using namespace std;
int main(int argc, char **argv)
{
    char org_str[1001];
    int len = strlen(org_str);
    int i = 0 , j = 0 , k = 0 , m = 0 , l = 0 , n = 0;
    for(i = 0 ; org_str[i] != '\0' ; i++)
    {
        cout<<org_str[i];
        if(org_str[i] == org_str[i+1])
        {
            char temp_str[1000];
            k = 0 ;
            while(org_str[i] == org_str[i+1])
            {
                temp_str[k++] = org_str[i];
                i++;
            }
            temp_str[k] = '\0';
            char ch = temp_str[0];
            for(m = 0 ; m < strlen(temp_str); m++)
            {
                if(ch == 'z')
                ch = 'a';
                else
                ch++;
                cout<<ch;
            }
        }
    }
}
