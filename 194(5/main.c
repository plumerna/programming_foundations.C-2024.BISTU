#include<stdio.h>

#define NOT_FIND -1
#define TOTAL_STU 8


float aver(int pStu[][7], int stuNo);

int main(void)
{
	int student[TOTAL_STU][7];
	float averScore;
	int i, j, stuNumber;

	printf("Input the %d student's number and score: \n", TOTAL_STU);

	for (i = 0; i < TOTAL_STU; i++)
    {
		for (j = 0; j < 7; j++)
        {
			scanf("%d", &student[i][j]);
		}
	}

	printf("Input a student's number to compute: ");
	scanf("%d", &stuNumber);

	averScore = aver(student, stuNumber);
	printf("Output:");
	if (NOT_FIND == averScore)
	{
		printf("\nstudent of No.%d not Find!\n", stuNumber);
	}
	else
	{
		printf("\nThe No.%d student's average is %.2f\n", stuNumber, averScore);
	}

	return 0;
}


float aver(int pStu[][7], int stuNo)
{
    int i,j;
    double sum=0;
    for(i=0;i<TOTAL_STU;i++)
    {
        if(pStu[i][0]==stuNo)
        {
            for(j=1;j<7;j++)
            {
                sum+=pStu[i][j];
            }
            return(float)(sum/6);
        }
    }
    return NOT_FIND;
}
