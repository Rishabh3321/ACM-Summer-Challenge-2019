import java.io.*;
import java.util.*;
 
class balgame
{
 static int Array( int arr1[] , int arr2[] , char str[] , int n,Stack<Integer>stk)
{
int result = 0; 
 for (int i=0; i<n; i++) 					
	{ 
	if (str[i] == '(') 
		stk.push(i); 
 
		else 
		{
			if (!stk.empty()) 					//important af
			{ 
				arr2[i] = 1; 
				arr1[(Integer)stk.peek()] = 1; 
				stk.pop(); 
			} 
 
	 
			else
				arr2[i] = 0; 
		} 
	} 
	
 
	for( int i = 1 ; i < n; i++ ) 
	{ 
		result +=arr2[i];
	} 
	
	return result*2;
} 
 
 
public static void main(String args[]) 
{ 
 
	String s;
   Scanner sc=new Scanner(System.in);
   Stack<Integer> stk=new Stack<Integer>();
   s=sc.next();
   int n,i;
   n=s.length();
   char []str=s.toCharArray();
 int arr1[]=new int[n+1];
 int arr2[]=new int[n+1];
 for(i=0;i<n+1;i++)
	arr1[i] =0;
	for(i=0;i<n+1;i++) 
	arr2[i] =0; 	
	
    System.out.println(Array( arr1 , arr2 , str, n,stk )); 
 
 
}
}
