#include<stdio.h>
#include<math.h>

void artFunc(int arraySize, int myArray);

int main()
{
	
	int arraySize = 0, getMem = 0;	
	int myArray[100];

	printf("Enter The Array Size:");
	scanf_s("%d", &arraySize);
	printf("Enter The Array Members:");
	for (getMem = 0; getMem < arraySize; getMem++)
	{
		scanf_s("%d", &myArray[getMem]);
	}
	void artFunc(arraySize, myArray);

	
	system("PAUSE");
	return 0;
}

void artFunc(int arraySize, int myArray)
{
	printf("Function is Called.\n");
	int *aS;
	double artMean = 0.0;

	for (aS = 0; aS < arraySize; aS++)
	{
		artMean += myArray[aS];
	}
	printf("Aritmetic Mean is:%.3f\n", artMean / arraySize);
}