#include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 #include <ctype.h>
char *reverseStringRetainCase(char *str) 
  {
       int i = 0 , j = 0  , k = 0 , l = 0, m = 0 , n = 0;
       int len = strlen(str);
       char *ptr = (char *)malloc(len*sizeof(char));
       char newstr[1001][1001];
       char result[len];
       for(i = 0 ; i < len +1 ; i++)
       {
            if(str[i] == ' ' || str[i] == '\0')
            {
                 newstr[k][l++] = '\0';
                 k++;
                 l = 0; 
            }
            else
            {
                 newstr[k][l++] = str[i];
            }
       }
       for(i = 0 ; i < k ; i++)
       {
            int newlen = strlen(newstr[i]);
            for(j = newlen-1; j >= 0 ; j--)
            {
                 result[m++] = newstr[i][j];
            }
            result[m++] = ' ';
       }
       result[m++] = '\0';
       for(i = 0 ; i < len; i++)
       {
            if(islower(str[i]))
            result[i] = tolower(result[i]);
            else
            result[i] = toupper(result[i]);
       }
       strcpy(str,result);
  }
  int main()
   { 
       char str[1001]; 
       scanf("%[^\n]", str);
        reverseStringRetainCase(str);
         if(str[0] == '\0' || str[0] == ' ')
          {
               printf("String is empty\n");
          } 
          printf("%s", str); 
          return 0; 
    }