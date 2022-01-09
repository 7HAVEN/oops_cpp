#include <iostream>
#include <iterator>
#include <map>
#include <string>

using namespace std;
int main() {

    map<int, string> m;
    m.insert(pair<int, string>(1, "hello"));
    m.insert(pair<int, string>(3, "wrld"));
    m.insert(pair<int, string>(2, "this"));
    m.insert(pair<int, string>(4, "is"));

    map<int, string>::iterator itr;

    for (itr = m.begin(); itr != m.end(); ++itr) {
        cout << "key = " << (*itr).first << " value = " << (*itr).second;
        cout << endl;
    }
    cout << "Enter the key of the element you want to find : ";
    int k;
    cin >> k;
    itr = m.find(k);
    if (itr != m.end()) {
        cout << "found the  value = " << (*itr).second << endl;
    } else {
        cout << "key not found" << endl;
    }
    cout << "Enter the key of the element you want to remove : ";
    cin >> k;
    m.erase(k);
    cout << "Erased element with key " << k << endl;

    cout << "size of map: " << m.size() << "\nmax capacity : " << m.max_size()
         << std::endl;
    cout << (m.empty() ? "map is empty\n" : "map is not empty\n");
    
    m.clear();
    cout << "Erased elements from map\n";

    return 0;
}