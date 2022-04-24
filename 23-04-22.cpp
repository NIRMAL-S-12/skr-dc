#include<iostream>
using namespace std;
int fun(int n , int m)
{
    if(n == m)
    return 1;
    return 0;
}
int main(int argc, char **argv)
{
    int num1 = 123456789;
    int num2 = 123456789;
    int arr1[1001];
    int arr2[1001];
    int i = 0 , j = 0 , k = 0 , l = 0, m = 0 , n = 0;
    int min = num1 < num2 ? num1 : num2;
    int max = num1 > num2 ? num1 : num2;
    int res[1001];
    while(min != 0)
    {
        int remfornum1, remfornum2;
        remfornum2 = min % 10;
        remfornum1 = max % 10;
        if(remfornum1 % 2 != 0 && remfornum2 % 2 != 0)
        if(fun(remfornum1, remfornum2))
        {
            res[k++] = remfornum1;
        }
        max /= 10;
        min = min / 10;
    }
    for(i = k-1 ; i >= 0 ; i--)
    cout<<res[i]<<endl;
    



}