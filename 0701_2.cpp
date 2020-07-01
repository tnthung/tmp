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
		tmp[i] = 0;
	}
	
	for (int i=0; i<all; i++)
	{
		int a;
		if (a = tmp[i])
		{
			std::cout << i+1;
		}
	}
}
