import java.util.Scanner;

class QuestionsToUser
{
	public static void askAndDisplayQuestionsToUser()
	{
		
		String s;
		Scanner sc= new Scanner(System.in);
		for(int i=0;i<3;i++)
		{
			s= sc.nextLine();
			if(s.equals("7"))
			{
				System.out.println("Good");
				System.exit(0);
			}

		}
		System.out.println("Correct Answer is : 7 ");	
		
	}

	public static void main(String args[])
	{
		
		System.out.println("How many Days are there in week ? \n Enter your answer : ");
		askAndDisplayQuestionsToUser();
		
		

	}
}