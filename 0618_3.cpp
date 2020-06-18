#include <iostream>


int main()
{
    int a;
    std::cin >> a;
    
    for (int i=0; i<a; i++)
    {
        for (int j=0; j<i; j++) std::cout << ' ';
        for (int j=0; j<a; j++) std::cout << (char)('A' + j);
        std::cout << "\n";
    }
}
