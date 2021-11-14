#include<stdio.h>
int main()
{
	for(int row=0;row<5;row++){
		for(int col=0;col<5;col++){
			if((row-col==0)&&row<3||(col==3 && row==1)||(row==0&&col==4)||(row>2 && col==2)){
				printf("*");
			}
			else
				printf(" ");
		}
		printf("\n");
	}
}