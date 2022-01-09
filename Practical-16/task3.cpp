#include <iostream>
using namespace std;
int main() {
    try {
        throw 'a' ;
    } catch (int x) { // this catch will run when we throw an int
        cout << "Caught " << x;
    } catch (...) {
        cout << "Default Exception\n "; // this catch  will be executed as we throw a char as exception
    }
    return 0;
}