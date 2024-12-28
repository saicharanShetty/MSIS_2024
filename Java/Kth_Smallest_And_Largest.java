import java.util.Scanner;

class Kth_Smallest_And_Largest
{
	public static void findKthSmallestAndLargest(int size, int a[], int k)
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
		System.out.println(" \n Smallest : "+ a[k-1] +" \n" + "Largest : "+ a[size-k]);
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
		System.out.println(" \nEnter the value of k :");
		int k=sc.nextInt();

		findKthSmallestAndLargest(n, arr, k);

	}
}