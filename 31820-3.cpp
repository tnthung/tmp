#include <iostream>


int main() {
    int a, b;
    
    std::cin >> a >> b;
    
    int i;
    for (i=0; i<a; i++) {
        int j;
        for (j=0; j<b; j++) {
        
            if (i==0 || i==a-1 || j=0 || j=b-1)
                std::cout << "@";
        
        }
        
        std::cout << std::endl;
    }
}
