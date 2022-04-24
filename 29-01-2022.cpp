#include<iostream>
using namespace std;
int main(int argc, char **argv) 
{
    int r = 5 , c = 4 ; 
    int matrix[][c] = {{46, 14, 63, 96}, 
                    {36, 85, 67, 41},
                    {77, 81, 91, 60},
                    {83, 13, 57, 56},
                    {97, 80, 72, 68}
                   };
                   
    int i , j , k =0 , l  , m , n , tofindx = 0 , tofindy = 0;
    int arr[100] ;
    int x = 3 , y = 24;
    for(j = 0 ; j < c ; j++)
    {
        arr[k++] = matrix[0][j]; 
    }
    for(i = 1 ; i < r ; i++)
    {
        arr[k++] = matrix[i][c-1];
    }
    for(j = c-2 ; j >= 0 ; j--)
    {
        arr[k++] = matrix[r-1][j];
    }
    for(i = r-2 ; i > 0 ; i--)
    {
        arr[k++] = matrix[i][0];
    }
    cout<<" k = "<<k<<endl;
    for(i = 0 ; i < k ; i++)
    cout<<arr[i]<<"  ";
    cout<<endl;
    /*
    while(x > k)
    {
        x = x - k ; 
    }
    while(y > k)
    {
        y = y - k ;
    }
    */
    x = x % k ;
    y = y % k ; 
    int temp = arr[x-1] ;
    arr[x-1] = arr[y-1] ;
    arr[y-1] = temp ;
    for(i = 0 ; i < k ; i++)
    cout<<arr[i]<<"  ";
    int b = 0;
    for(j = 0 ; j < c ; j++)
    {
        matrix[0][j] = arr[b++];
    }
    for(i = 1 ; i < r ; i++)
    {
        matrix[i][c-1] = arr[b++];
    }
    for(j = c-2 ; j >= 0 ; j--)
    {
        matrix[r-1][j] = arr[b++];
    }
    for(i = r-2 ; i > 0 ; i--)
    {
        matrix[i][0] = arr[b++];
    }
    for(i = 0 ; i < r ; i++)
    {
        for(j = 0 ; j < c; j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

}