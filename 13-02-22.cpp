#include <bits/stdc++.h>
 
using namespace std;

int main(int argc, char** argv)
{
    char str[10001] =  "CACCCDAADCCCCCCCBC";
    int i = 0 , j = 0 , k = 0 , l = 0 , m = 0 , n = 0;
    int len = strlen(str);
    int acount = 0 , bcount = 0 ,ccount = 0 , dcount = 0;
    for(i = 0 ; str[i] != '\0' ; i++)
    {
        if(str[i] == 'A')
        acount++;
        else if(str[i] == 'B')
        bcount++;
        else if(str[i] == 'C')
        ccount++;
        else
        dcount++;
    }
    cout<<"acount = "<<acount<<endl<<"bcount = "<<bcount<<endl<<"ccount = "<<ccount<<endl<<"dcount = "<<dcount<<endl;
    int aquo = acount / 4;
    int arem = acount % 4;
    int cquo = ccount / 4;
    int crem = ccount % 4;
    cout<<"aquo = "<<aquo<<endl<<"arem = "<<arem<<endl<<"cquo = "<<cquo<<endl<<"crem = "<<crem<<endl;
    k = aquo * 100 + arem * 40;
    l = bcount * 60;
    m = cquo * 200 + crem * 55;
    n = dcount * 95;
    cout<<k+l+m+n;


}