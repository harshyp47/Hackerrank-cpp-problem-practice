#include <sstream>
#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<string> parseInts(string str) {
	stringstream ss(str); 
    vector<string> integers;
    while (ss.good()) { 
        string substr; 
        
        getline(ss, substr, ','); 
        integers.push_back(substr); 
    }
    return integers; 
}

int main() {
    string str;
    cin >> str;
    vector<string> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}