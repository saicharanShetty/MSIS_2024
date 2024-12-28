import java.util.*;

class Minutes_To_Years
{
	public static double getYear(double l)
	{
		double year=((l)/(60*24*365));
		return year;
	}
	public static void main (String args [])
	{
		Scanner sc= new Scanner(System.in);
		double min= sc.nextInt();
		double years= getYear(min);
		System.out.println(years);

	}
}