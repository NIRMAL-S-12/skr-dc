#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main(int argc, char **argv)
{
    string text;
    string filename;
    ifstream MyReadFile("file.txt");
    if(MyReadFile.is_open())
    while(getline(MyReadFile, text))
    {
        cout<<text<<endl;
    }
    else
    {
        cout<<"UNABLE TO OPEN";
    }
    MyReadFile.close();
}