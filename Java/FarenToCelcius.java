import java.util.Scanner;

class FarenToCelcius
{
	
public static double farenToCel(double F)
{
	return (F-32)/1.8;
}


public static void main(String args[])
	{
		double F,C;

		Scanner sc = new Scanner(System.in);
		F = sc.nextFloat();
		
		System.out.println("Temp in Celcius = " + farenToCel(F));

	}

}