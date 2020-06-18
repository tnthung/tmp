#include <iostream>


int main()
{
    int x, y, z, c;
    double mean;
    
    std::cin >> x >> y >> z;
    
    for (int i=x; i<=y; i++)
    {
        if (i%z != 0)
        {
            mean += i;
            c    += 1;
        }
    }
    
    std::cout << mean / (double)c;
}
