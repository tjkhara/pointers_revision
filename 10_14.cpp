///*********************************************************************
//** Author: Tajeshwar Singh Khara
//** Date: Sept 21st 2018
//** Description: 10_2 from textbook
//*********************************************************************/
//
//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//int main()
//{
//	double* sales = nullptr, // To dynamically allocate an array
//		total = 0.0,		// Accumulator
//		average;			// To hold average sales
//	int numDays;			// To hold number of days of sales
//
//	// Get number of days of sales
//	cout << "How many days of sales figures do you wish to process?" << endl;
//	cin >> numDays;
//
//	// Dynamically allocate an array large enough to hold that many days of sales amounts
//	sales = new double[numDays]; // Allocate memory
//
//	// Get the sales figures for each day
//	cout << "Enter the sales figures below: " << endl;
//
//	for (size_t i = 0; i < numDays; i++)
//	{
//		cout << "Day " << (i + 1) << ": ";
//		cin >> sales[i];
//	}
//
//	// Calculate the total sales
//	for (size_t i = 0; i < numDays; i++)
//	{
//		total += sales[i];
//	}
//
//	// Calculate the average sales per day
//	average = total / numDays;
//
//	// Display the results
//	cout << setprecision(2) << fixed << showpoint;
//	cout << "\n\nTotal Sales: $" << total << endl;
//	cout << "Average Sales: $" << average << endl;
//
//	// Free dynamically allocated memory
//	delete[] sales;
//	sales = nullptr;
//
//	system("PAUSE");
//	return 0;
//}