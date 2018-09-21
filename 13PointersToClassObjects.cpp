///*********************************************************************
//Author: Tajeshwar Singh Khara
//Date: 21 September 2018 12:06:23
//Description: This program uses pointers to dynamically allocate
//structures and class objects.
//*********************************************************************/
//
//#include <iostream>
//#include <string>
//using namespace std;
//
//// Person class
//
//class Person
//{
//private:
//	string name;
//	int age;
//public:
//	// Constructor
//	Person(string name1, int age1)
//	{
//		name = name1;
//		age = age1;
//	}
//	// Getters
//	int getAge()
//	{
//		return age;
//	}
//
//	string getName()
//	{
//		return name;
//	}
//};
//
//// Rectangle structure
//struct Rectangle
//{
//	int width, height;
//};
//
//int main()
//{
//	Rectangle* pRect = nullptr; // Pointer to Rectangle
//	Person* pPerson = nullptr; // Pointer to Person
//
//	// Local object accessed through a pointer
//	Rectangle rect;
//	pRect = &rect;
//
//	(*pRect).height = 12;
//	pRect->width = 10;
//	cout << "Area of the first rectangle is " << pRect->height * pRect->width << endl;
//
//	// Dynamically allocated object accessed through pointer
//	pRect = new Rectangle;
//	pRect->height = 6;
//	pRect->width = 5;
//	cout << "Area of the second rectangle is " << pRect->height*pRect->width << endl;
//	delete pRect;
//	pRect = nullptr;
//
//	// Dynamically allocated object accessed through pointer
//	pPerson = new Person("TJ",34);
//	cout << "Name: " << pPerson->getName() << endl;
//	cout << "Age: " << pPerson->getAge() << endl;
//	delete pPerson;
//	pPerson = nullptr;
//
//
//
//	system("PAUSE");
//	return 0;
//}