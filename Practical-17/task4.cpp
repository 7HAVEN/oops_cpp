
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

void display(vector<int> v) {
    for (auto it = v.begin(); it != v.end(); it++)
        cout << *it << " ";

    cout << endl;
}
int main() {
    int arr[] = {1, 3, 4, 7, 8, 3, 3};
    vector<int> v;
    v.assign(begin(arr), end(arr));
    display(v);
    sort(v.begin(),v.end());
    cout << "Sorted vector : ";
    display(v);
    sort(v.rbegin(),v.rend());
    cout << "reversed vector :";
    display(v);
    cout << "min element = " << *min_element(v.begin(),v.end()) << "\nmax element = " << *max_element(v.begin(),v.end())  << endl;
    cout << "no  3 occured = " <<count(v.begin(),v.end(),3) << "times "<< endl;
    sort(begin(arr),end(arr));
    cout << "sorted arr is: ";
    for(int i = 0; i < 7;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Enter the element you want to find: ";
    int x;
    cin  >> x;
    cout  << (binary_search(begin(arr),end(arr),x) ? "Element found\n" : "element not found\n");
    
    
    return 0;
}