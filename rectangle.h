/*! \file rectangle.h
	\brief Declaration of the class Rectangle

	Details.
*/


#ifndef RECTANGLE_H
#define RECTANGLE_H

using namespace std;

/// @class Rectangle
/// @brief to manage an object with the shape of a rectangle
class Rectangle
{
private:
	float length;
	float width;

public:

	Rectangle();									// default constructor
	Rectangle(float w, float l);					// constructor
	Rectangle(const Rectangle& r);					// copy constructor	

	~Rectangle();									//destructor

	Rectangle& operator=(const Rectangle& r);		// overload of operator =
	bool operator==(const Rectangle& r);			// overload of operator == 

	void Init();									// function Init
	void Init(const Rectangle& r);
	void Reset();									// function Reset
	
	void SetLength(float l);
	void SetWidth(float w);
	void SetDim(float w, float l);
	
	float GetLength();
	float GetWidth();
	void GetDim(float& w, float& l);
	
	float GetArea();
	float GetPerimeter();

};

#endif