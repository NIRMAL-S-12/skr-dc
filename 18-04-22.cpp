#include<iostream>
#include<string.h>
using namespace std;
int main(int argc, char **argv)
{
    int row = 5, col = 5;
    int sum = 0 , i = 0 , j = 0 , k = 0 , l = 0 , m = 0 ;
    char str[row][col][3] = {
                            {"1", "2", "*", "8", "9"},
                            {"*", "3", "6", "7", "10"},
                            {"*", "4", "5", "*", "11"},
                            {"*", "*", "16", "*", "12"},
                            {"*", "*", "15", "14", "13"}
                            };
    for(i = 0 ; i < row; i++) 
    {
        for(j = 0 ; j < col; j++)
        {
            for(k = 0 ; k < 2; k++)
            {
                if(str[i][j][k] != '\0' && isdigit(str[i][j][k]))
                {
                    l = str[i][j][k] - '0';
                    sum = sum * 10 + l;
                }
            }
            cout<<"   ";
        }
        cout<<endl;
    }
}