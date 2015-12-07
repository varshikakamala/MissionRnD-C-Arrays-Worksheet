/*
OVERVIEW:  You are given scores for students of a class in alphabetical order. Write a function that returns the names and scores of top K students.
Input is array of structures of type student (each student has name and score).
E.g.: If input is [ { "stud1", 20 }, { "stud2", 30 }, { "stud3", 40 } ] (three students with marks 20, 30 , 40) and K value is 2.
return top 2 students [ { "stud2", 30 }, { "stud3", 40 } ]

INPUTS: array of structures of type student, length of the array, integer K.

OUTPUT: Return top K students from array. Output need not be in decreasing order of scores.

ERROR CASES: Return NULL for invalid inputs.

NOTES:
*/

#include <iostream>
#include <malloc.h>
#include <stdio.h>

struct student
{
	char *name;
	int score;
};
struct student ** topKStudents(struct student *students, int len, int K)
{
	int i, j, score1;
	char *name1;

	struct student **std;
	if (students == NULL || len<0 || K<1)
		return NULL;
	name1 = (char *)malloc(sizeof(char) * 5);

	if (K > len)
		K = len;
	std = (struct student **)malloc(sizeof(struct student*)*K);

	{
		for (i = 0; i < len; i++)
		{
			for (j = 0; j < len; j++)
			{
				if (students[i].score >= students[j].score)
				{
					score1 = students[i].score;
					students[i].score = students[j].score;
					students[j].score = score1;

					name1 = students[i].name;
					students[i].name = students[j].name;
					students[j].name = name1;

				}
			}
		}
		for (i = 0; i < K; i++)
			std[i] = &students[i];
		return std;
	}

}
