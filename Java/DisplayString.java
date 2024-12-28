import java.util.Scanner;

class DisplayString
{
	public static void main( String args [])					
	{
		
		Scanner sc= new Scanner(System.in);
		
		String s= sc.next();
		
		char[] sChars = s.toCharArray();
		
		char temp;
		
		int len=sChars.length;
		
		for(int i=0;i<len;i++)
		{
			for(int j=0;j<len;j++)
			{
				if(sChars[i]>sChars[j])
				{
					temp=sChars[i];
					sChars[i]=sChars[j];
					sChars[j]=temp;

				}
			}
		}
		String out= String.valueOf(sChars);

		System.out.println("String = " +out+" len= "+len  );

	}
}