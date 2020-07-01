#include <isotream>


void t()
{
	int a, b;
	int table[3][3] = {
		{2, 9, 4},
		{7, 5, 3},
		{6, 1, 8}
	};

	std::cin >> a >> b;
	std::cout << table[a][b] << std::endl;
}

int main()
{
	t();
	t();
}
