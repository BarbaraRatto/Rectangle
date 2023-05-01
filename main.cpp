#include<iostream>

#include "Rectangle.h"

int main() 
{
	float wa;
	float la;
	float wb;
	float lb;
	float A;
	float P;
	
	Rectangle objRectA(10,5);
	Rectangle objRectB;
	
	objRectB.SetDim(3,7);
	objRectA.SetWidth(4);


	la = objRectA.GetLength();
	wa = objRectA.GetWidth();
	objRectB.GetDim(wb, lb);

	A = objRectA.GetArea();
	P = objRectA.GetPerimeter();

	Rectangle objRectC(6, 9);
	Rectangle objRectD = objRectC;

	if (objRectA == objRectB)
		cout << "Rectangle A has the same size of Rectangle B" << endl;
	else
		cout << "Rectangle A has not the same size of Rectangle B" << endl;

	if (objRectC == objRectD)
		cout << "Rectangle C has the same size of Rectangle D" << endl;
	else
		cout << "Rectangle C has not the same size of Rectangle D" << endl;


	return 0;
}