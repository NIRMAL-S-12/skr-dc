#include <stdio.h> 
#include <stdlib.h> 
void splitStringSameCharacters(char *str) 
{
     int freq[256] = {0};
      int i , j , k , l , m , n;
       //int len = strlen(str);
        for(i = 0 ; str[i] ; i++) 
        {
             freq[str[i]]++; 
        }
         for(i = 0 ; str[i] ; i++) 
         {
              if(str[i] == str[i+1])
              {
                   if(freq[str[i]] == 2) 
                   {
                        printf("%c " , str[i]); i++; 
                    }
              }
               printf("%c" ,str[i]); 
        }
}
 int main()
  {
       char str[1001] = "nirmallEEnfinfnKKekvnrvnBUDJJknfi"; 
       //scanf("%s", str); 
       splitStringSameCharacters(str); 
       return 0; 
  }