#include<iostream>
using namespace std;

int fun(int m, int n)
{
    int num1 = 0 , num2 = 0;
    while(n!=0)
    {
        num2 = num2 * 10 + n %10;
        n /= 10;
    }
    while(m!=0)
    {
        num1 = num1 * 10 + m %10;
        m /= 10;
    }
    char str[1001];
    int i = 0 , count = 0;
    char c , ch;
    while(num1!=0 && num2!=0)
    {
        int t = num1 % 10;
        int p = num2 % 10;
        if(t >= p)
        {
            c = t + '0';
            str[i++] = c;
            ch = p + '0';
            str[i++] = ch;
        }
        else
        {
            c = p + '0';
            str[i++] = c;
            ch = t + '0';
            str[i++] = ch;
        }
        num1 /= 10;
        num2 /= 10;
    }
    str[i] = '\0';
    long long int num = stoi(str);
    return num;
}
int main(int argc, char **argv)
{
    int n = 4;
    int arr[] = {128, 654, 678,987};
    int res[1001];
    int i = 0 , j = 0 , k = 0 , l = 0 , m = 0 , count =0;
    for(i = 0 ; i < n - 1; i+=2)
    {
        k = fun(arr[i], arr[i+1]);
        res[m++] = k;
    }
    for(i = 0 ; i < m ;i++)
    {
        for(j = i+1 ; j <m ; j++)
        {
            if(res[i] > res[j])
            {
                int t = res[i];
                res[i] = res[j];
                res[j] = t;
            }
        }
        cout<<res[i]<<endl;
    }

    return 0; 
}