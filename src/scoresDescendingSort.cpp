/*
OVERVIEW:  You are given scores for students of a class in alphabetical order. Write a function that sorts these scores in descending order.
Input is array of structures of type student (each student has name and score).
E.g.: If input is [ { "stud1", 20 }, { "stud2", 30 }, { "stud3", 40 } ] (three students with marks 20, 30 , 40).
Output for this will be [ { "stud3", 40 }, { "stud2", 30 }, { "stud1", 20 } ]

INPUTS: Array of structures of type student, length of array.

OUTPUT: Sort the array in descending order of scores.

ERROR CASES: Return NULL for invalid Inputs.

NOTES:
*/

#include <stdio.h>

struct student {
	char name[10];
	int score;
};

void * scoresDescendingSort(struct student *students, int len) {
	int i, j, temp, k, flag;
	char temp1[10];
	if (len < 0 || students == NULL)
		return NULL;
	else if (len > 1)
	{
		for (i = 1; i < len; i++)
		{
			if (students[0].score == students[i].score)
				flag = 1;
			else
				flag = 0;
		}
		if (flag == 0)
		{
			for (i = 0; i < len-1; i++)
			{
				for (j = i+1 ; j < len; j++)
				{
					if (students[i].score < students[j].score)
					{
						temp = students[i].score;
//						for (k = 0; students[i].name[k] != '\0'; k++)
	//						temp1[k] = students[i].name[k];
						students[i].score = students[j].score;
		//				for (k = 0; students[j].name[k] != '\0';k++)
			//				students[i].name[k] = students[j].name[k];
						students[j].score = temp;
				//		for (k = 0; temp1[k] != '\0';k++)
					//		students[j].name[k] = temp1[k];
					}
				}
			}
		}
	}
}