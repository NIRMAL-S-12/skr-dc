#include<iostream>
using namespace std;
int main(int argc, char **argv)
{
  int r = 2 ; 
  int c = 1;
  int i , j , k , l , m , n;
  for( i = 0 ; i < r ; i++)
  {
    char str[r][1000];
    for( j = 0 ; j < c ; j++)
    {
      cin>>str[j];
    }
    cout<<str[i]<<endl;
  }

}