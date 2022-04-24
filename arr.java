import java.util.*;
public class arr
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        ArrayList<String> l = new ArrayList<String>();
        String str = "pen table desk admin junction rock";
        String chararr[] = str.split(" ");
        for(int i = 0 ; i < chararr.length ; i++)
        {
            int sizeofi = chararr[i].length();
            int checkfori = 0 , checkforj = 0 ;
            int k = -1 , totalcount = 0;
            System.out.println(chararr[i] + "   " +sizeofi);
            for(int j = i + 1 ; j < chararr.length; j++)
            {
                
                int sizeofj = chararr[j].length();
                totalcount++;
                if(chararr[i].charAt(sizeofi - 1) == chararr[j].charAt(sizeofj - 1))
                {
                    System.out.println(j + 1);
                    checkfori = 1;
                    break;
                }
                else
                {
                    checkforj = 1;
                }
                if(j == chararr.length - 1)
                {
                    j = -1;
                }
                if(totalcount == chararr.length - 1)
                {
                    break;
                }

            }
            if(i == chararr.length - 1)
            for(int j = 0 ; j < chararr.length ; j++)
            {
                int sizeofj = chararr[j].length();
                if(chararr[i].charAt(sizeofi - 1) == chararr[j].charAt(sizeofj - 1))
                {
                    System.out.println(j + 1);
                    checkfori = 1;
                    break;
                }
                else
                {
                    checkforj = 1;
                }
            }
            if(checkfori == 0 && checkforj == 1)
            {
                System.out.println(i + 1);
            }

        }
    }
}