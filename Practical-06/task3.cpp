#include<iostream>
#include<string>
#include<iterator>
int main(){

    std::string str;
    std::cin >> str;
    std::string::iterator iter;
    std::reverse_iterator<std::string::iterator> rev = str.rbegin();
    std::string s2(rev,str.rend());
    std::cout << s2 << std::endl;

    return 0;
}