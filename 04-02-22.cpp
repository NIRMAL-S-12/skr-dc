#include<iostream>
#include<string.h>
using namespace std;
int main(int argc, char **argv)
{
    int summa;
    scanf("%d\n", &summa);
    char str[1001]; 
    cin.getline(str,1001);
    int i = 0 , j = 0 , k = 0 , l = 0 , m = 0 , n = 0; 
    int init_size = strlen(str); 
    char delim[] = " ";  
    char *ptr = strtok(str, delim);
    int total_sum = 0;  
    while(ptr != NULL)  
    {     
        //cout<<ptr<<endl;   
        m = 0 ;    
        for(i = 0; i < strlen(ptr); i++)
        {        
            if(isdigit(ptr[i])) 
            {    
                k = ptr[i] - '0';
                m = m * 10 + k;   
            }      
            if(isalpha(ptr[i]))
            {         
                if(ptr[i] == 'z' && ptr[i+1] == 'e')            
                {       
                    k = 0;   
                    m = m * 10 + k;   
                }     
                else if(ptr[i] == 'o' && ptr[i+1] == 'n')     
                {                  
                    k = 1;             
                    m = m * 10 + k;      
                }           
                else if(ptr[i] == 't' && ptr[i+1] == 'w') 
                {          
                    k = 2;             
                    m = m * 10 + k;      
                }           
                else if(ptr[i] == 't' && ptr[i+1] == 'h') 
                {        
                    k = 3;      
                    m = m * 10 + k;  
                }          
                else if(ptr[i] == 'f' && ptr[i+1] == 'o')
                {                  
                    k = 4;           
                    m = m * 10 + k;    
                }          
                else if(ptr[i] == 'f' && ptr[i+1] == 'i') 
                {             
                    k = 5;          
                    m = m * 10 + k;   
                }            
                else if(ptr[i] == 's' && ptr[i+1] == 'i')  
                {                
                    k = 6;            
                    m = m * 10 + k;          
                }              
                else if(ptr[i] == 's' && ptr[i+1] == 'e')     
                {         
                    k = 7;             
                    m = m * 10 + k;      
                }            
                else if(ptr[i] == 'e' && ptr[i+1] == 'i')  
                {                 
                    k = 8;           
                    m = m * 10 + k;      
                }            
                else if(ptr[i] == 'n' && ptr[i+1] == 'i') 
                {            
                    k = 9;            
                    m = m * 10 + k;    
                }            
            
            }        
            
        }     
        total_sum += m; 
        ptr = strtok(NULL, delim);
    }    
    cout<<total_sum;
    
}