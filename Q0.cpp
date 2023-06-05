#include<iostream>
#include<cstring>
#include<cctype>
#include<cstdlib>

using namespace std;

string to_upper(string, int);

int main() {
    string line;    
    while (getline(cin, line)) {
        cout << to_upper(line, 0) << endl;
    } 
    return 0;
}

string to_upper(string line, int index_now) {
    char temp = toupper(line[index_now]);
    if(index_now >= line.length()) {
        return "";
    }
    return temp + to_upper(line, index_now + 1);
}