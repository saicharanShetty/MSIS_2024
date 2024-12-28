import java.util.Scanner;

class DisplayFloydsTriangle
{
	public static void printFloydsTriangle()
	{
		
		int cnt=1;
	outer:for(int i=0;;i++)
		{
			for(int j=0;j<i;j++)
			{
				System.out.print(cnt + " ");
				cnt++;
				if(cnt==92)
					break outer;
			}
			System.out.println();
		}
		
	}

	public static void printAlteredFloydsTriangle()
	{
		
		System.out.println("\n \nprinting Altered Flyods Triangle : \n");
		int cnt=0;
	 	for(int i=1;i<10;i++)
		{
			
			cnt=(i%2 == 0) ? 0: 1;
			for(int j=0;j<i;j++)
			{
				System.out.print(cnt + " ");
				cnt=(cnt==1)?0:1;
			}
			System.out.println();
		}
		
	}


	public static void main(String args[])
	{
		
		System.out.println("Displaying Floyd's Traingle Now");
		printFloydsTriangle();
		printAlteredFloydsTriangle();
		
		

	}
}