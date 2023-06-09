/// \file rectangle.cpp
///	\brief class Rectangle: implementation of the functions
///
///	Details.
///

#include <iostream>
#include "Rectangle.h"

/// @brief default constructor 
Rectangle::Rectangle() 
{
	cout << "Rectangle - constructor - default" << endl;

	Init();
}

/// @brief constructor 
/// @param w width in pixels
/// @param h length in pixels
Rectangle::Rectangle(float w, float l)
{
	Init();

	cout << "Rectangle - constructor" << endl;

	if (w <= 0.) 
		cout << "WARNING: Rectangle - constructor: width should be > 0" << endl;
	else
		width = w;

	if (l <= 0.) 
		cout << "WARNING: Rectangle - constructor: length should be > 0" << endl;
	else
		length = l;
}

/// @brief copy constructor 
/// @param reference to the object that should be copied
Rectangle::Rectangle(const Rectangle& r)
{
	cout << "Rectangle - copy constructor" << endl;

	Init(r);											// perch� solo r
}

/// @brief destructor 
Rectangle::~Rectangle() 
{
	cout << "Rectangle - destructor" << endl;
	Reset();
} 

/// Overload of operators

/// @brief overload of operator = 
/// @param reference to the object on the right side of the operator 
/// @return reference to the object on the left side of the operator 
Rectangle& Rectangle::operator=(const Rectangle& r)
{
	cout << "Rectangle - operator =" << endl;

	Init(r);

	return *this;			// return the rectangle
}

/// @brief overload of operator == 
/// @param reference to the object on the right side of the operator 
/// @return true if the two objects have the same width and the same length  
bool Rectangle::operator==(const Rectangle&r)
{
	if (r.width == width && r.length == length)
		return true;

	return false;
}

/// Init and Reset functions

/// @brief default initialization of the object
void Rectangle::Init()
{
	Reset();						// perch� due volte?
	width = 0;
	length = 0;
}

/// @brief initialization of the object as a copy of another object 
/// @param r reference to the object that should be copied 
void Rectangle::Init(const Rectangle& r)
{
	Reset();
	width = r.width;
	length = r.length;
}

/// @brief total reset of the object  
void Rectangle::Reset()
{
	width = 0;						
	length = 0;
}


/// functions set

/// @brief set length of the object
/// @param l length in pixels
void Rectangle::SetLength(float l)
{
	if (l < 0.) {
		cout << "WARNING: Rectangle - SetLength: length should be > 0" << endl;
		return;
	}

	length = l;

}

/// @brief set width of the object
/// @param w width in pixels
void Rectangle::SetWidth(float w)
{
	if (w < 0.) {
		cout << "WARNING: Rectangle - SetWidth: width should be > 0" << endl;
		return;
	}

	width = w;
}

/// @brief set width and length of the object
/// @param w width in pixels
/// @param l length in pixels
void Rectangle::SetDim(float w, float l)
{
	SetWidth(w);
	SetLength(l);
}

/// functions get

/// @brief get length of the object
/// @return rectangle length in pixels
float Rectangle::GetLength()
{
	return length;
}

/// @brief get width of the object
/// @return rectangle width in pixels
float Rectangle::GetWidth()
{
	return width;
}

/// @brief get width and length of the object
/// @param w width in pixels
/// @param l length in pixels
void Rectangle::GetDim(float&w, float&l)
{
	w = width;
	l = length;

	return;
}

/// functions Area and Perimeter

/// @brief get area of the object
/// @return rectangle area in pixels
float Rectangle::GetArea()
{
	return length * width;
}

/// @brief get perimeter of the object
/// @return rectangle perimeter in pixels
float Rectangle::GetPerimeter()
{
	return 2 * (length + width);
}

