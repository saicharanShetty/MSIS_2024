import java.util.*;

class Find_Duplicates
{
	
	public static void printDuplicates(int size, int a[])
	{
		boolean flag=false;

		for(int i=0;i<size;i++)
		{
			for(int j=i+1;j<size;j++)
			{
				if(a[i]==a[j] && a[j]!=-1)
				{
					flag=true;
					a[j]=-1;
				}
			}
			if(flag)
			{
				System.out.println(a[i]);
				flag=false;
			}
		}
	}
	public static void main (String args [])
	{
		Scanner sc= new Scanner(System.in);
		int n=sc.nextInt();
		int arr[] = new int[n];
		for(int i=0;i<n;i++)
		{
			arr[i]=sc.nextInt();
		}
		printDuplicates(n,arr);


	}
}