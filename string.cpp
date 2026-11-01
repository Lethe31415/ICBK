#include <iostream>
#include <string>
#include <sstream> 

using namespace std;

int main() {
    string sentence = "Hello C++ OpenCV Robot";
    
    stringstream ss(sentence); 
    
    string word;

    cout << "开始拆分：" << endl;
    
    while (ss >> word) { 
        cout << word << endl; 
    }

    return 0;
}