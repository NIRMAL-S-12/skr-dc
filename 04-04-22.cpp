#include <iostream>
#include <string.h>
using namespace std;
char newstr[1001];
int count = 0;
int fun(char str[1001], int x, int y)
{
    cout<<"string  - "<<str<<endl;
    if (strcmp(newstr, str) == 0)
    {
        return 0;
    }
    int i = 0 , j = 0 , k = 0 , l = 0;
    char modstr[1001];
    int len = strlen(str);
    if (count % 2 == 0)
    {
        count++;
        for (i = len - x; i < len; i++)
        {
            modstr[k++] = str[i];
        }
        for (i = 0; i < len - x; i++)
        {
            modstr[k++] = str[i];
        }
        modstr[k] = '\0';
        fun(modstr, x, y);
    }
    else
    {
        count++;
        for(i = len - y ; i < len; i++)
        {
            modstr[k++] = str[i];
        }
        for(i = 0 ; i < len - y; i++)
        {
            modstr[k++] = str[i];
        }
        modstr[k] = '\0';
        fun(modstr, x, y);
    }
    return count;
}
int main(int argc, char **argv)
{
    char str[1001] = "auwJsXwQUUAZ";
    int x = 12, y = 1;
    int i = 0, j = 0, k = 0, l = 0;
    int len = strlen(str);
    strcpy(newstr, str);
    char modstr[1001];
    count++;
    for (i = len - x; i < len; i++)
    {
        modstr[k++] = str[i];
    }
    for (i = 0; i < len - x; i++)
    {
        modstr[k++] = str[i];
    }
    modstr[k] = '\0';
    cout<<fun(modstr, x, y);
}