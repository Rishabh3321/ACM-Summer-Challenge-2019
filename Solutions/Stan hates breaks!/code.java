import java.util.*;
class test
{
    public static void main(String args[])
    {
        String s;
        Scanner sc=new Scanner(System.in);
        s=sc.nextLine();
        char ch;
        int i;
        String wd=" ";
        wd=s.replace(' ','\\');
        System.out.print(wd);
    }
}
