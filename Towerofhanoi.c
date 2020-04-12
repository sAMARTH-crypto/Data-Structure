// solving tower of hanoio using recursion 
//BEG represents begining rod
//AUX represents auxilary rod
//END represents destination rod

#include <stdio.h>

void TOH(int n, char BEG, char END, char AUX) 
{
	if (n>=1)
	{
		TOH(n-1,BEG,END,AUX);
		printf("%c to %c",BEG,END);
		TOH(n-1,AUX,BEG,END);
	}
} 


int main() 
{ 
    int n = 3; // Number of disks 
    TOH(n, 'A', 'C', 'B');  // A, B and C are names of rods 
    return 0; 
