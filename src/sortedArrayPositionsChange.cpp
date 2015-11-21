/*
OVERVIEW: In a given ascending sorted array, two numbers are changed their position, please fix those two numbers.
E.g.: In [10, 40, 30, 20, 50] 20 and 40 are swapped, so final output will be [10, 20, 30, 40, 50]

INPUTS: Ascending sorted array with two positions swapped, length of the array.

OUTPUT: Update sorted array by fixing swapped numbers.

ERROR CASES: Return NULL for invalid Inputs.

NOTES:
*/

#include <stdio.h>

void * sortedArrayPositionsChange(int *Arr, int len)
{
	int i, swap, pos1=0, j = 0, pos2=0, k;
	if (len<0 || Arr==NULL)
	    return NULL;
	else
	{
		for (i = 0; i < len - 1; i++)
		{
			if (Arr[i] < Arr[i + 1])   continue;
			else
			{
				if (j ==0) pos1 = i;
				else if (j == 1)  pos2 = i+1;
				j++;
			}
		}
		//m = temp + j;
		//k = pos2;
		//for (i =pos1; i <= (pos1 + pos2) / 2; i++)
		//{
			swap = Arr[pos1];
			Arr[pos1] = Arr[pos2];
			Arr[pos2] = swap;
			//k--;
		//}

	}
}