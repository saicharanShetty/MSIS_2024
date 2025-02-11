write a c code to toggle a bit.

----> consider char c=0x00;
	  we need to toggle 4th bit without harming other bits.
	  
	  while(1)
	  {
		c=c^(0x01<<4);
	  }
