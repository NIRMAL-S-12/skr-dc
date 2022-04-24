#include<bits/stdc++.h>
using namespace std;
 

int fun2calc(int arr[], int n)
{
    int min = INT_MAX;
    bool isOdd = false;
 
    int sum = 0;  
    for (int i=0 ; i<n ; i++)
    {
        if (arr[i] > 0)
            sum = sum + arr[i];
        if (arr[i]%2 != 0)
        {
            isOdd = true;
            if (min > abs(arr[i]))
                min = abs(arr[i]);
        }
    }
 
    if (isOdd == false)
       return -1;
    if (sum%2 == 0)
        sum = sum - min;
 
    return sum;
}
 
int main()
{
    int n;
    cin>>n;
    int arr[n] , i ,j;
    for(i = 0 ; i<n ; i++)
    cin>>arr[i];
    cout << fun2calc(arr, n);
    return 0;
}