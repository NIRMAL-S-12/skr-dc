#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(int argc, char **argv)
{
    int r = 5, c = 6;
    int i = 0 , j = 0 , k = 0 , l = 0 , m = 0 , n = 0;
    int matrix[r][c] = {{73,31,19,10,27,12},
                        {82,66,15,23,64,89},
                        {17,40,74,41,99,38},
                        {46,79,91,28,57,35},
                        {94,97,45,55,33,56}};
    int min = INT_MAX;
    for(i = 0 ; i < r ; i++)
    {
        for(j = 0 ; j < c ; j++)
        {
            if(matrix[i][j] > min)
            min = matrix[i][j];
        }
    }
    int max = INT_MIN;
    for(i = 0 ; i < r ; i++)
    {
        for(j = 0 ; j < c ; j++)
        {
            if(matrix[i][j] > max)
            max = matrix[i][j];
        }
    }
    cout<<min<<endl<<max;
    

}