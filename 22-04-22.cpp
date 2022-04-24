#include<iostream>
using namespace std;
int fun(int matrix[1001][1001], int n , int index, int calc) 
{
    int i = 0 , j = 0 , k = 0 , l = 0 , m = 0 ;
    int sum = 0;
    for(i = index; i < calc; i++)
    {
        for(j = index ; j < calc; j++)
        {
            if(i == index || j == index || i == calc - 1 || j == calc - 1)
            sum = sum + matrix[i][j];
               // cout<<sum<<endl;

        }

    }
    return sum;
}
int main(int argc, char **argv)
{
    int n = 5;
    int matrix[1001][1001] = {{2,3,4,5,1},
                        {3,10,6,7,2},
                        {4,13,6,9,2},
                        {5,6,5,3,3},
                        {7,5,7,2,4}};
    int layer = (n / 2) + (n % 2);
    int sum[layer];
    int i = 0 , j = 0 , k = 0 , l = 0;
    for(i = 0 ; i < layer ; i++)
    {
        sum[i] = fun(matrix, n, i, n - l);
        l += 1;
        cout<<sum[i]<<endl;
    }
    for(i = 0 ; i < layer; i++)
    {
        int count = 1;
        for(j = i + 1; j < layer; j++)
        {
            if(sum[i] == sum[j])
            count++;
        }
        if(count>=2)
        {
            cout<<sum[i];
            break;
        }
    } 
}