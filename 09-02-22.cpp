#include<iostream>
using namespace std;
void fun(int *evenarr , int n)
{
    //cout<<"n = "<<n<<endl;
    int eve[n] ;
    int i = 0 , j = 0 , k = 0 , l = 0;
    if(n == 0)
    {
        exit(0);
    }
    else
    {
        for(i = 0 ; i < n ; i++)
        {
            k = evenarr[i] / 2 ;
            cout<<k<<"  ";
            if(k % 2 == 0)
            eve[l++] = k;
        }
        cout<<endl;
        fun(eve , l);
    }
}
int main(int argc, char **argv)
{
    int n;
    cin>>n;
    int arr[n] , i = 0 , j = 0 , k = 0 , l = 0 , m = 0 ;
    int evenarr[n];
    for(i = 0 ; i < n ; i++)
    {
        cin>>arr[i] ;
        if(arr[i] % 2 == 0)
        evenarr[k++] = arr[i];
    }
    fun(evenarr , k);
}