#include <stdio.h>

int main()  {
	try{
		try{
			printf("%d",1); throw 0;
		} catch(int e) {throw 1;}
		}catch(int e)  {
			printf("%d",e+2);
		}
printf("\n");	
}
