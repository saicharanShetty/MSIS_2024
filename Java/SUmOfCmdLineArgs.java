class SUmOfCmdLineArgs
{
	public static void main( String args [])					// cmd line args stored here
	{
		
		int sum=0;
		
		for(int i=0;i<3;i++)
		{
			sum+=Integer.parseInt(args[i]);
		}

		System.out.println("Sum = "+ sum); 

	}
}