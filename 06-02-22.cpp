#include<iostream>
#include<math.h>
using namespace std;
int fun(int n, int m, int row, int col, int mat[1000][1000])
{
    int i = 0 , j = 0 , k = 0 ;
    int mrow, mcol, nrow, ncol;
    for(i = 0 ; i < row ; i++)
    {
        for(j = 0 ; j < col ; j++)
        {
            if(mat[i][j] == n)
            {
                nrow = i;
                ncol = j;
            }
            if(mat[i][j] == m)
            {
                mrow = i;
                mcol = j;
            }
        }
    }
    int a = abs(nrow - mrow);
    int b = abs(ncol - mcol);
    return a>b? a : b;
}
int main()
{
    int r,c;
    //cin>>r>>c;
    r = 3;
    c = 3;
    int mat[1000][1000] = {{6,7,4}, {3,8,5}, {2,9,1}};
    int arr[r*c];
    int i = 0 , j = 0 , k = 0;
    for(i = 0 ; i < r ; i++)
    {
        for(j = 0 ; j < c ; j++)
        {
           // cin>>mat[i][j];
            arr[k++] = mat[i][j];
        }
    }
    for(i = 0 ; i < k ; i++)
    {
        for(j = i + 1 ; j < k ; j++)
        {
            if(arr[i] > arr[j])
            {
                int t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
        }
    }
    int sum = 0;
    for(i = 0 ; i < k ; i++)
    {
        sum += fun(arr[i], arr[i+1], r, c, mat);
    }
    cout<<sum;



}