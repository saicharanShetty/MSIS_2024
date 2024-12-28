import java.util.Scanner;


class NumberTester
{
	public static void main(String args [])
	{
	final int n =10;
		
		NumberOperations numop= new NumberOperations();

		Scanner sc = new Scanner ( System.in);

		int a [] = new int[n];

		for(int i=0; i < n;i++)
			a[i]= sc.nextInt();

		System.out.println("Max ="+ numop.maximum(a,n));
		System.out.println("Min ="+ numop.minimum(a,n));

		a = numop.sort(a, n);
		for(int i=0;i<10;i++)
			System.out.print(a[i]+" ");
		
	}
}