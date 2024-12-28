class NumberOperations
{
	int maximum(int a[], int n)
	{
		int max=a[0];
		for(int i=1; i < n; i++)
		{
			if(a[i]>max)
				max=a[i];
		}
		return max;
	}
	int minimum(int a[], int n)
	{
		int min=a[0];
		for(int i=1; i < n; i++)
		{
			if(a[i]<min)
				min=a[i];
		}
		return min;
	}
	int[] sort(int a[], int n)
	{
		
		for(int i=0; i < n; i++)
		{
			for(int j=0; j < n; j++)
			{
				if(a[i]<a[j])
				{
					a[i]=a[i]^a[j];
					a[j]=a[i]^a[j];
					a[i]=a[i]^a[j];
				}
			}
		}
		return a;
	}

}