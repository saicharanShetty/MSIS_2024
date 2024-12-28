import java.util.Scanner;

class Avg_Of_Numbers
{
	public static void findNumbersGreaterThanAvgOfArray(int size, int a[])
	{
		int sum=0;

		for(int i=0;i<size;i++)
			sum+=a[i];

		float avg=sum/size;
		System.out.println("Numbers Greater than AVG is being displayed now..: ");

		for(int i=1;i<size;i++)
		{
			if(a[i]>avg)
				System.out.println(a[i]);
		}

	}

	public static void main(String args[])
	{
		Scanner sc= new Scanner(System.in);
		System.out.println("Enter Size of Array :");
		int n=sc.nextInt();
		System.out.println("\nEnter Elements of array");
		int arr[] = new int[n];
		for(int i=0;i<n;i++)
		{
			arr[i]=sc.nextInt();
		}
		findNumbersGreaterThanAvgOfArray(n, arr);

	}
}