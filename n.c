#include<stdio.h>
int main()
{
	for(int row=0;row<5;row++){
		for(int col=0;col<5;col++){
			if((col==0 || col==4) || (row-col==0)&&row!=0&&row!=4){
				printf("*");
			}
			else
				printf(" ");
		}
		printf("\n");
	}
}