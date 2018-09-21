//#include <iostream>
//using namespace std;
//
//int* squares(int n)
//{
//	// Allocates an array of size n
//	int* sqarray = new int[n];
//
//	// Fill the array with squares
//	for (int i = 0; i < n; i++)
//	{
//		sqarray[i] = (i + 1)*(i + 1);
//	}
//
//	return sqarray;
//}
//
//
//int main()
//{
//	int* arrptr = nullptr; // Create a pointer variable and set it to nullptr
//	arrptr = squares(4); // call the function expecting a pointer to an array coming in the return
//	
//	for (size_t i = 0; i < 4; i++)
//	{
//		cout << arrptr[i] << endl;
//	}
//
//	system("PAUSE");
//	return 0;
//}