#include <iostream>
#include <iterator>
#include <list>
using namespace std;

int main() {

    list<int> l = {3, 6, 7, 0, 9, 1};
    list<int>::iterator it;
    cout << "elements in  list are: ";

    for (it = l.begin(); it != l.end(); ++it)
        cout << *it << " ";
    cout << '\n';

    cout << "size of list: " << l.size() << std::endl;
    l.sort();
    cout << "sorted list is: ";
    for (it = l.begin(); it != l.end(); ++it)
        cout << *it << " ";
    cout << '\n';
    l.reverse();
    cout << "Reversed list is: ";
    for (it = l.begin(); it != l.end(); ++it)
        cout << *it << " ";
    cout << '\n';
    return 0;
}
