//#include <iostream>
//#include <cstdlib> // For rand and srand
//#include <ctime> // For the time function
//using namespace std;
//
//// Function prototype
//int* getRandomNumbers(int);
//
//int main()
//{
//	int* numbers = nullptr; // To point to the numbers
//
//	// Get an array of five random numbers
//	numbers = getRandomNumbers(5);
//
//	//Display the numbers
//	for (size_t i = 0; i < 5; i++)
//	{
//		cout << numbers[i] << endl;
//	}
//
//	// Free the memory
//	delete[] numbers;
//	numbers = nullptr;
//
//	system("PAUSE");
//	return 0;
//}
//
///*********************************************************************
//** Function Name: getRandomNumbers
//** Description: The getRandomNumbers function returns a pointer	to an 
//** array of random integers. The parameter indicates the number of 
//** numbers requested.									   
//*********************************************************************/
//
//int* getRandomNumbers(int size)
//{
//	int* array = nullptr; // Array to hold the numbers
//
//	// Return nullptr if size is 0 or negative
//	if (size <= 0)
//	{
//		return nullptr;
//	}
//
//	// Dynamically allocate the array
//	array = new int[size];
//
//	// Seed the random number generator by passing the return value of time(0) to srand
//	srand(time(0));
//
//	// Populate the array with random numbers
//	for (size_t i = 0; i < size; i++)
//	{
//		array[i] = rand();
//	}
//
//	// Return a pointer to that array
//	return array;
//}
