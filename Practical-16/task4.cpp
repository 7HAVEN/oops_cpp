#include <iostream>
using namespace std;
int main() {
    try {
        throw 'a';
    } catch (int x) { // this will not work as it doesn't catch the exception
        cout << "Caught"; // as result program will terminate early
    }
    return 0;
}