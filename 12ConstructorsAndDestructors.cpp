///*********************************************************************
//** Author: Tajeshwar Singh Khara
//** Date: September 21st 2018
//** Description: Constructors and destructors in dynamic 
//** memory allocation.
//*********************************************************************/
//
//#include <iostream>
//#include <string>
//using namespace std;
//
//class Squares
//{
//
//private:
//	int length; // How long is the sequence
//	int* sq; // Dynamically allocated array
//
//public:
//	// Constructor allocates storage for sequence
//	// of squares and creates the sequence
//	Squares(int len)
//	{
//		length = len;
//		sq = new int[length]; // allocating memory
//		for (size_t i = 0; i < length; i++)
//		{
//			sq[i] = (i + 1)*(i + 1);
//		}
//		// Trace
//		cout << "Construct an object of size " << length << endl;
//	}
//
//	// Print the sequence
//	void print()
//	{
//		for (size_t i = 0; i < length; i++)
//		{
//			cout << sq[i] << endl;
//		}
//	}
//
//	// Destructor deallocates the storage
//	~Squares()
//	{
//		delete[] sq; // Deallocate the memory that sq is pointing to
//		sq = nullptr; // Point sq to nullptr
//	}
//
//
//};
//
///*********************************************************************
//Function Name: outputSquares
//Description: The getRandomNumbers function returns a pointer to an
//array of random integers. The parameter indicates the number of
//numbers requested.
//*********************************************************************/
//void outputSquares(Squares* sqPtr)
//{
//	cout << "The list of squares is : \n";
//	sqPtr->print();
//}
//
//int main()
//{
//	// Main allocates a squares object
//	Squares* sqPtr = new Squares(3);
//	outputSquares(sqPtr);
//
//	// Main deallocates the Squares object
//	delete sqPtr;
//
//	system("PAUSE");
//	return 0;
//}