import java.util.*;
class test
{
    public static void main(String args[])
    {
        int n,i,c=0;
        Scanner sc=new Scanner(System.in);
        n=sc.nextInt();
        String s;
         s=sc.next();
         
        char ch,ch1;
        ch=s.charAt(s.length()-1);
        for(i=n-1;i>=0;i--)
        {
          ch1=s.charAt(i);
          if(ch1!=ch)
          break;
          else
          c++;
          
        }
        
        System.out.println(n-c);
    }
}
