#include<iostream>
#include<sstream>
#include <string.h>
using namespace std;
int fun(int n)
{
    int s = 0 ; 
    while(n!=0) 
    {  
        s++;  
        n /= 10;  
    }  
    return s;
    
}
int concatfun(int n, string s2)
{  
    string s1 = to_string(n) ;
    //string s2 = to_string(x) ;
    string s = s1+s2;
    int sum = stoi(s) ;
    return sum;
    
}
void fun2(int arr[], int x, int y, int n, int a, int total)
{  
    ostringstream str1;
    string ch ="";
    int i , j , k  , m, t = 1 ,z, b , c;   
    for(i = 1; i<= a ; i++) 
    {     
        t = t * 10; 
    }  
    str1 << arr[x] % t;
    string l = str1.str();
    cout<<" l =  "<<l<<endl; 
    m = fun(arr[x] % t);
    z = fun(arr[x]);
    b = fun(arr[x] / t) ;
    c = z - b - m;
    //cout<<" m = "<<m<<endl<<" z = "<<z<<endl<<"b = "<<b<<endl<<"c = "<<c<<endl;
    if(m + b != z)
    {
        for(i = 0 ; i<c ; i++)
        {
            ch.append("0");
        }
    }
    cout<<"ch = "<<ch<<endl;
    ch.append(l);
    arr[x] = arr[x] / t; 
    arr[y] = concatfun(arr[y] , ch);
    int sum = 0 ; 
    for(i = 0 ; i < total; i++) 
    {   
        cout<<arr[i]<<" ";  
        sum += arr[i];   
    }  
    cout<<endl<<sum;
    
}
int main(int argc, char** argv) 
{ 
    
    int i , j , k , l , m , a, b ,c ; 
    int arr[] = {10, 500 , 2000};
    int n = sizeof(arr) / sizeof(arr[0]);   
    k = fun(arr[0]); 
    //cout<<" k = "<<k<<endl;  
    for(i = 1; i < n ; i++) 
    {    
        //cout<<"i in  1 = "<<i<<endl; 
        a = fun(arr[i]); 
        if(a != k)    
        {  
            j = i ; 
            //cout<<arr[j]<<endl;   
            break;     
        }  
    }  
    //cout<<" a = "<<a<<endl;
    for(i = n-1; i >= 1 ; i--) 
    {  
        //cout<<"i in  2 = "<<i<<endl; 
        l = fun(arr[i]);   
        if(l != k)  
        {  
            m = i;      
            //cout<<arr[m]<<endl;   
            break;    
        } 
    } 
    //cout<<" l = "<<l<<endl; 
    if(arr[j] > arr[m])
    {     
        // cout<<" if "<<endl; 
        fun2(arr, j , m, k , k - l , n); 
    } 
    else 
    {      
        //cout<<" else "<<endl; 
        fun2(arr, m , j, k , l - k , n );   
    }   
}