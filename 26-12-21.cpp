#include<iostream>
#include<math.h>
using namespace std;

int fun1(int number)
{
    int sum = 0 , r;
    int temp = number;
    int digits = 0;
    int lastnumber = 0;
    /*
    while(n>9)
    {
        r = n % 10;
        sum = sum * 10 + r;
        n = n / 10;
    }
    int rev = 0;
    while(sum != 0)
    {
        rev = rev * 10 + sum % 10;
        sum = sum / 10;
    }
    //return rev;
    cout<<"rev = "<<rev<<endl;
    */
   while(temp>0)
    {
        digits++;
        lastnumber = temp % 10;
        temp = temp/10;
    }

    number =  number % (lastnumber * (int)pow(10,digits-1));
    cout<<"number = "<<number<<endl;

}
int fun2(int n)
{
    while(n>9)
    {
        n = n/10;
    }
    return n ;
}
int main(int argc, char *argv[])
{
    int n = 3;
    int arr[] = {321, 134, 558};
    int i,j,k,l,m = arr[0];
    while(m > 9)
    {
        m = m /10; 
    }
    int total_sum = 0;
    for(i = 0; i < n - 1; i++)
    {
        k = fun1(arr[i]);
        //cout<<"k = "<<k<<endl;
        l = fun2(arr[i + 1]);
        //cout<<"l = "<<l<<endl;
        j = k * 10 + l;
        total_sum = total_sum + j;
    }
    k = fun1(arr[n-1]);
    j = k * 10 + m;
    total_sum = total_sum + j ;
    //cout<<"total = "<<total_sum<<endl;
}