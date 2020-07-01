#inlclude <iostream>


int main()
{
	int all, arr, tmp[100];
	
	for (int i=0; i<100; i++)
	{
		tmp[i] = 1;
	}
	
	std::cin >> all >> arr;
	
	for (int i=0; i<arr; i++)
	{	
		int a;
		std::cin >> a;
		tmp[a] = 0;
	}
	
	for (int i=0; i<all; i++)
	{
		if (tmp[i])
		{
			std::cout << i+1;
		}
	}
}
