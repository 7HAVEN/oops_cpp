#include<iostream>
#include<string>
#include<iterator>
int main(){

    std::string s1,s2;
    std::cin >> s1 >> s2;
    bool flag = true;
    if(s1.length()!= s2.length()) flag = false;
    for(int i = 0;i<s1.length();i++){
        if(s1[i] != s2[i]) flag = false;
    }
    std::cout << (flag ? "string are equal ":"string are not equal") << std::endl;

    return 0;
}