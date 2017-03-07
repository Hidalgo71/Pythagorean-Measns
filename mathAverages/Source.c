#include<stdio.h>
#include<math.h>

int main()
{
	int arraySize = 0, getMem = 0;
	float artMean = 0, geoMean = 1, harMean = 1;
	int aS = 0, gS = 0, hS;
	int myArray[100];
	printf("Enter The Array Size:");
	scanf_s("%d", &arraySize);
	printf("Enter The Array Members:");
	for (getMem = 0; getMem < arraySize; getMem++)
	{
		scanf_s("%d", &myArray[getMem]);
	}

	//Aritmetic Mean
	for (aS = 0; aS < arraySize; aS++)
	{
		artMean += myArray[aS];
	}
	printf("Aritmetic Mean is:%.3f\n", artMean/arraySize);

	//Geometric Mean
	for (gS = 0; gS < arraySize; gS++)
	{
		geoMean *= myArray[gS];
	}
	geoMean=sqrt(geoMean);
	
	printf("Geometric Mean is:%.3f\n", geoMean);

	//Harmonic Mean
	for (hS = 0; hS < arraySize; hS++)
	{
		harMean += 1 / myArray[hS];
		printf("%.3f\n", harMean);
	}

	printf("Harmonic Mean is:%.3f\n", harMean);
	system("PAUSE");
	return 0;
}