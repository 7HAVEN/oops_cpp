#include <iostream>
int main()
{

    int *p = {10, 20, 20};
    std::cout << *p;
    p++;
    std::cout << *p;
    return 0;
}