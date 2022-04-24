import java.util.*;
public class dc 
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        ArrayList <String> str = new ArrayList<String>();
        int r = 2;
        int c = 1;
        String s;
        char strarr[][] = new char[3*r][3*c]; 
        int i = 0 , j = 0 , k = 0 , l = 0 , m = 0 , n = 0;
        for(i = 0 ; i < r ; i++)
        {
            for(j = 0 ; j < c ; j++)
            {
                //s = sc.next();
                str.add("b4d8n2");
                str.add("k2l4w4");
            }
        }
            for(i = 0 ; i < str.length() ; i+=2)
            {
                l = Character.getNumericValue(str.charAt(i+1));
                System.out.println(l);
                
            }
    }    
}
