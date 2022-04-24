#include<stdio.h>
#include<stdlib.h>

int main()
{
    char s[1001],ch;
    scanf("%s",s);
    for(int i=0;i<strlen(s);i++){
        if(s[i-1]==s[i]){
            printf("%c",ch);
            if(ch=='z') ch='a';
            else ch++;
        }
        else printf("%c",s[i]);
        if(s[i]==s[i+1] && s[i]!=s[i-1]) ch=s[i]=='z'?'a':s[i]+1;
    }
}