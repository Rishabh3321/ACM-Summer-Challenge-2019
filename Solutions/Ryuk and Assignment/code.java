import java.util.*;
class test
{
    public static void main(String args[])
    {
        int N;
        String A;
        int i;
        int ch,s=0;
        
        Scanner sc=new Scanner(System.in);
        N=sc.nextInt();
        A=sc.next();
        for(i=0;i<N;i++)
        {
            
            ch=(int)A.charAt(i);
            s+=ch;
        }
        if(s%3==0)
        System.out.println("YES");
        else
        System.out.println("NO");
        
       
    }
}
