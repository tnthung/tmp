#include <iostream>


int main()
{
	int all, arr;
	
	std::cin >> all >> arr;
	int tmp[all];
	
	for (int i=0; i<all; i++)
	{
		tmp[i] = 1;
	}
	
	for (int i=0; i<arr; i++)
	{	
		int a;
		std::cin >> a;
		tmp[a-1] = 0;
	}
	
	for (int i=0; i<all; i++)
	{
		if (tmp[i])
		{
			std::cout << i+1 << " ";
		}
	}

	system("pause");
}
