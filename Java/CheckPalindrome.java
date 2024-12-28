import java.util.Scanner;

class CheckPalindrome
{
	public static void main( String args [])					
	{
		
		Scanner sc= new Scanner(System.in);
		
		String s= sc.next();
		
		int len=s.length();
		
		boolean flag=true;
		
		for(int i=0;i<len/2;i++)
		{
			if(!(s.charAt(i)==(s.charAt(len-i-1))))
				{
					flag=false;
					break;
				}
		}
	String out= flag ? "String is a Palindrome": "String is not a Palindrome";
	System.out.println(out);

	}
}