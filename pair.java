import java.util.*;
public class pair
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int n = 4;
        String str = "626(564) (343)752 (179)99";
        int i = 0 , j = 0 , l = 0 , k = 0 , m = 0 ;
        int len = str.length();
        String chararr[] = str.split(" ");
        int nopar[] = new int[len];
        int par[] = new int[len];
        int noParCount = 0 , parCount = 0 ;
        for(i = 0 ; i < chararr.length ; i++) 
        {
            System.out.println(chararr[i]);
            String res = chararr[i].substring(chararr[i].indexOf("(")+1,chararr[i].indexOf(")"));
            m = Integer.parseInt(res);
            par[parCount++] = m;
        }
        for(i = 0 ; i < chararr.length ; i++)
        {
            int newlen = chararr[i].length();
            int newsum = 0 ;
            String newstring = "";
            int start = chararr[i].indexOf("(");
            int end = chararr[i].indexOf(")");
            if(start != 0)
            newstring = chararr[i].substring(0, start);
            else
            newstring = chararr[i].substring(end+1, newlen);
            m = Integer.parseInt(newstring);
            nopar[noParCount++] = m;
        }
        for ( i = 0; i < noParCount; i++)   
        {  
            for ( j = i + 1; j < noParCount; j++)   
            {  
                int tmp = 0;  
                if (nopar[i] < nopar[j])   
                {  
                    tmp = nopar[i];  
                    nopar[i] = nopar[j];   
                    nopar[j] = tmp;  
                }  
            }  
        }
        for (i = 0; i < parCount; i++)   
        {  
            for (j = i + 1; j < parCount; j++)   
            {  
                int tmp = 0;  
                if (par[i] > par[j])   
                {  
                    tmp = par[i];  
                    par[i] = par[j];  
                    par[j] = tmp;  
                }  
            }  
        }
        int p1 = 0 , p2 = 0 , count = 0;
        for(i = 0 ; i < chararr.length ; i++)
        {
            int newlen = chararr[i].length();
            String newstring = "";
            int start = chararr[i].indexOf("(");
            int end = chararr[i].indexOf(")");
            int countforcheck = 0;
            for(j = 0 ; j < newlen; j++)
            {
                count++;
                char character = chararr[i].charAt(j);
                
                if(Character.isDigit(character))
                {
                    //System.out.println("character = " + character);
                    if(p2 >= noParCount)
                    break;
                    System.out.print(nopar[p2]);
                    j = start - 1 ;
                    p2++;
                    if(countforcheck == 1)
                    break;
                    
                }
                if(character == '(')
                {
                    countforcheck = 1;
                   if(p1 >= parCount )
                   break;
                   System.out.print("(" + par[p1] + ")");
                   p1++;
                   j = end;
                   
                }
            }
            System.out.print(" ");

        }
    }
}