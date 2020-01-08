#include <iostream>
#include <string>


class CBox
{
	int length;
	int width;
	int height;

public:
	CBox(int a, int b, int c)
		: length(a), width(b), height(c)
	{

	}

	CBox()
	{
		length = 6;
		width = 10;
		height = 8;
	}
};


int main()
{
	CBox tmp1 = CBox();
	CBox tmp2 = CBox(1, 2, 3);
}
