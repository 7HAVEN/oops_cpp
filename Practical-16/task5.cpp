#include <iostream>
int divide(int x, int y) {
    int res;
    try {
        if (y == 0) {
            throw std::runtime_error("Divsion by zero");
        }
        res = x / y;
    }
    catch(std::exception &e){
        throw;
    }
    return res;
}

int main() {

    try {
        int a, b, c;
        std::cin >> a >> b;
        c = divide(a,b);
    } catch (std::exception e) {
        std::cout << "Division by zero is not possible\n";
    }

    return 0;
}