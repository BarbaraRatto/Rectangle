#include<iostream>

#include "Rectangle.h"

int main() 
{
	int wa;
	int la;
	int wb;
	int lb;
	
	Rectangle objRectA(10,5);
	Rectangle objRectB;
	
	objRectB.SetDim(3,7);
	objRectA.SetWidth(4);


	la = objRectA.GetLength();
	wa = objRectA.GetWidth();
	objRectB.GetDim(wb, lb);

	return 0;
}