
#include<iostream>
#include<fstream>

using namespace std;

int main() {
    fstream file,file2;
    char word;
    file.open("test.txt");
    file2.open("write.txt",std::ios::app);
    int count =0,lines = 0 ;
    while (file >> word) {
        file2  << word;
        cout << word;
        if(word == '\n') lines ++;
        count++;
    
    }
    cout << "\n no of words: " << count << "\n";
    cout << "\n no of lines: " << lines << "\n";

    file2.close();
    file.close();
    
    return 0;
}

