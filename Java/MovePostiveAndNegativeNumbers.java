import java.util.Scanner;

class MovePostiveAndNegativeNumbers
{
	public static int [] movePostiveAndNegativeNumbersToLeftAndRight(int size, int a[])
	{
		int temp=0;
		for(int i=0;i<size;i++)
		{
			for(int j=i+1;j<size;j++)
			{
				if(a[i]>a[j])
				{
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
			}
			
		}

	return a;
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
		arr=movePostiveAndNegativeNumbersToLeftAndRight(n, arr);

		for(int i=0;i<n;i++)
			{
				System.out.print(arr[i]+" ");
			}

	}
}