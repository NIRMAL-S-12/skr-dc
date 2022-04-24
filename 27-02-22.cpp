#include<iostream>
using namespace std;
int max = 0;
int fun(int row, int col, int r, int c, int arr[][100]) 
{
    int i = 0 , j = 0 , l = 0, rowcount = 0 , colcount = 0 ;
    for(i = row; i < r; i++)
    {
        if(arr[i][col] == 1)
        {
            rowcount++;
        }
        else
        {
            break;
        }
    }
    for(j = col; j < c; j++)
    {
        if(arr[row][j] == 1)
        {
            colcount++;
        }
        else
        {
            break;
        }
    }
    cout<<"rowcount = "<<rowcount<<endl;
    cout<<"colcount = "<<colcount<<endl;
    return rowcount;
}
int main(int argc, char **argv)
{
    int r = 6 ,c = 8;
    int max = 0 ;
    /*int arr[100][100] = 
                     {{0,0,0,0,0,1,1,0},
                     {1,1,1,0,0,0,0,0},
                     {0,0,1,1,1,1,1,1},
                     {1,1,1,1,0,1,1,0},
                     {1,1,0,1,0,1,1,0},
                     {0,0,0,1,1,1,1,1}};
                     */
    int arr[100][100] = {{1,1,0}, {1,0,1}, {0,1,1}, {1,1,0}};
    int i = 0 , j = 0 , k = 0 , l = 0;
    for(i = 0 ; i < r; i++)
    {
        for(j = 0 ; j < c ; j++)
        {
            if(arr[i][j] == 1)
            {
                k = fun(i, j , r, c, arr);
            }
            if(k > max)
            {
                max = k;
            }
        }
    }
    if(max > 2)
    cout<<"max = "<<max<<endl;
    else
    cout<<"-1";
}