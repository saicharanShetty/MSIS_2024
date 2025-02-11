Find Endianess of System and convert to and fro

		#include <stdio.h>
		
		typedef enum endianess{
			little_endian=0,
			big_endian=1
		}endian;

		endian findEndianessOfSystem(int a)
		{
			char *ptr=&a;
			endian e=(*ptr==0x56)?little_endian:big_endian;
			return e;
		}

		int  convertEndianess(int val)
		{
			int new=0;
			while(val !=0)
			{
				new=new<<8;
				new|=(val&0xFF);
				val=val>>8;

			}
			return new;
		}


		int main() {
			int var=0x123456;
			printf("Variable Before conversion to Big Endian=%x\n",var);
			if(findEndianessOfSystem(var)==little_endian)
			{
				var=convertEndianess(var);
			}
			printf("Variable after conversion to Big Endian=%x\n",var);
			var=convertEndianess(var);
			printf("Variable back to conversion to Little Endian=%x\n",var);
			return 0;
		}
