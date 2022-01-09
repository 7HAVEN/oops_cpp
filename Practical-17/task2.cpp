#include <iostream>
#include <iterator>
#include <vector>
using namespace std;

int main() {

    vector<int> v;
    vector<int>::iterator it;
    for (int i = 0; i < 6; i++) {
        v.push_back(i);
    }
    cout << "elements in  vector are: ";

    for (it = v.begin(); it != v.end(); ++it)
        cout << *it << " ";
    cout << '\n';

    cout << "size of vector: " << v.size()
         << "\nmax capacity : " << v.max_size() << std::endl;
    // resizing a vector
    v.resize(3);
    cout << "size of vector after resizing: " << v.size() << endl;
    cout << (v.empty() ? "vector is empty\n" : "vector is not empty\n");
    return 0;
}
