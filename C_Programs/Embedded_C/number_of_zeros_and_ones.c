Given a an integer number, find number of zero's in that number(binary of that integer number)
	
	int a=0x0123;
	
	for(int i=0;i<sizeof(a)*8;i++)
    {
     printf("Printing digit %d - %d\n",i,(a>>i)&0x01)   ;
     if((a>>i)&0x01)
            ones++;
        else
            zeros++;
    }
	printf("%d ones and %d zeros exit in number %d ",ones,zeros,a);
