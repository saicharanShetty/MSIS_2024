import java.util.Scanner;

class NumOfVowels
{
	public static void main( String args [])					
	{
		
		Scanner sc= new Scanner(System.in);
		
		String s= sc.next().toLowerCase();

		System.out.println(s);
		
		int len=s.length();
		
		int no_of_vowels=0;
		
		for(int i=0;i<len;i++)
		{
			char c=s.charAt(i) ;
			if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
				no_of_vowels++;
		}
	
	System.out.println(no_of_vowels);

	}
}