#include<iostream>
#include<string.h>
using namespace std;
int fun(int a, int b)
{
    string s1 = to_string(a);
    string s2 = to_string(b);
    string s3 = s1 + s2;
    int c = stoi(s3);
    return c ;
}
int main(int argc, char **argv)
{
    int total = 0 ;
    cin>>total;
    char str[1001];
    cin.getline(str,1001);
    int len = strlen(str);
    int sep[len] , twomerge[len] , combine[len];
    int i = 0 , j = 0 , k = 0 , l = 0 , m = 0 , n = 0;
    char delim[] = " ";
    char ch[1001];
	char *ptr = strtok(str, delim);
    int firstans = 0, lastans = 0;
	while(ptr != NULL)
	{
        k = l = 0 ;
        int templen = strlen(ptr);
        for(i = 0 ; ptr[i] != '\0' ; i++)
        {
            if(ptr[i] != '|')
            {
                k = k * 10 + ptr[i] - '0';
            }
        }
        firstans += k;
        for(i = 0 ; ptr[i] != '\0' ; i++)
        {
            if(ptr[i] == '|')
            {
                sep[m++] = l;
                l = 0;
            }
            else
            {
                l = l * 10 + ptr[i] - '0';
            }
            if(i == templen - 1) 
            {
            sep[m++] = l;
            l = 0 ;
            }
        }

		ptr = strtok(NULL, delim);
	}
    cout<<firstans<<endl;
    for(i = 0 ; i < m ; i++)
    {
        for(j = i + 1 ; j < m ; j++)
        {
            if(sep[i] > sep[j])
            {
                int t = sep[i];
                sep[i] = sep[j];
                sep[j] = t;
            }
        }
    }
    for(i = 0 ; i < m ; i+=2)
    {
        int a = fun(sep[i] , sep[i+1]);
        lastans += a;
    }
    cout<<lastans<<endl;
}