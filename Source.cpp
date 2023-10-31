#include <iostream>


void output(int arr[],const int size)
{
	for (int j = 0; j < size; j++)
	{
		std::cout << arr[j] << ' ';
	}
	std::cout << '\n';
}

int main()
{

	const int size = 5;
	const int size1 = 25;

	int arr[size][size] = { {1,2,3,4,5},{5,3,7,5,8},{3,8,5,3,9},{0,3,0,3,3},{2,4,2,3,4} };

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			std::cout << arr[i][j] << ' ';
		}
		std::cout << '\n';
	}

	//---------------------------------------------------

	int arr1[size1] = { 111,2,35,4,35,5,53,7,54,8,3,83,5,3,95,0,3,0,3,35,24,43,52,3,42 };

	for(int i = 0; i<size1; i++)
	{
		for (int j = 0; j < size1-1; j++) 
		{
			if (arr1[j] > arr1[j + 1])
			{
				int buf = arr1[j];
				arr1[j] = arr1[j + 1];
				arr1[j + 1] = buf;
			}
		}
	}//n*n//пузырек

	//----------------------------------

	int arr2[size1] = { 1,24,3,14,35,5,13,17,5,8,13,8,5,3,9,0,3,04,34,3,25,4,42,3,4 };

	const int polovina = size1 / 2;
	
	
	int buf [ polovina ], buf_1 [ polovina+1 ];

	if (size1 % 2 == 1)
	{
		buf_1 [polovina] = arr2 [size1-1];
	}
	else
	{ 
		buf_1[polovina] = '\0';
	}

	for(int i=0,int j = polovina; i < polovina; i++,j++)
	{
		buf[i] = arr2[i];
		buf_1[i] = arr2[j];
	}
	
	//n log n//слияние
	//----------------------------------------------------
	
	output(arr1,size1);
}
/*if (size1 % 2 == 0)
	{
		chetn = 1;
	}
	else 
	{
		chetn = 0;
	}*/