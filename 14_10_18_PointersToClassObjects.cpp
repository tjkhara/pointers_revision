/*********************************************************************
Author: Tajeshwar Singh Khara
Date: 21 September 2018 12:06:23
Description: Pointers to class objects and structures as parameters of
functions.
*********************************************************************/
#include <iostream>
#include <string>
using namespace std;

// Person class
class Person
{
private:
	string name;
	int age;

public:
	Person(string name1, int age1)
	{
		name = name1;
		age = age1;
	}

	int getAge()
	{
		return age;
	}

	string getName()
	{
		return name;
	}
};


// Rectangle structure

struct Rectangle
{
	int width, height;
};

// Prototypes

void magnify(Rectangle* pRect, int mfactor);
int lengthOfName(Person* p);
void output(Rectangle* pRect);

int main()
{
	// Create and then magnify a rectangle by a factor of 3
	Rectangle rect;
	rect.height = 4;
	rect.width = 2;
	cout << "The initial size of rectangle is ";
	output(&rect);
	magnify(&rect, 3);
	cout << "Size of rectangle after modification is ";
	output(&rect);
	cout << endl;

	// Create Person object and find length of person's name
	Person* pPerson = new Person("Susan Wu", 32);
	cout << "The name " << pPerson->getName() << " has length ";
	cout << lengthOfName(pPerson) << endl;

	delete pPerson;
	pPerson = nullptr;


	system("PAUSE");
	return 0;
}

// Function definitions

/*********************************************************************
Function Name: output
Description: Output the dimensions of a rectangle.
*********************************************************************/
void output(Rectangle* pRect)
{
	cout << "width: " << pRect->width << " height: " << pRect->height << endl;
}

/*********************************************************************
Function Name: lengthOfName
Description: Returns the number of characters in a person's name.
*********************************************************************/

int lengthOfName(Person* p)
{
	string name = p->getName();
	return name.length();
}

/*********************************************************************
Function Name: magnify
Description: Stretch the width and height of a rectangle by a specified
factor.
*********************************************************************/

void magnify(Rectangle* pRect, int mfactor)
{
	pRect->height *= mfactor;
	pRect->width *= mfactor;
}