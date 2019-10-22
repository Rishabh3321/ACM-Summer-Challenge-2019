import java.util.*;
import java.lang.Math;
class test
{
    static long computeXOR(int n)
    {
        if(n%4==0)
        return n;
        if(n%4==1)
        return 1;
        if(n%4==2)
        return n+1;
        if(n%4==3)
        return 0;
    
        return 0;
    }
    public static void main(String args[])
    {
        int n,q;
        Scanner sc=new Scanner(System.in);
        n=sc.nextInt();
        q=sc.nextInt();
        while(q-->0)
        {
         int l,r;
         long res;
         l=sc.nextInt();
         r=sc.nextInt();
         res=computeXOR(r)^computeXOR(l-1);
         System.out.println(res);
         
        }
    }
}
