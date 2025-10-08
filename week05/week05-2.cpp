///week05-2.cpp
///搞懂stringstream
#include <iostream>/// 為了cin cout
#include <string>///為了字串string
#include <sstream>
using namespace std;///為了不寫 std::cin
int main()
{
    string line;
    getline( cin, line );
    cout << line << endl;

    stringstream ss(line);
    string word;
    while( ss >> word ){
        cout << "ss讀到1個字:" << word <<endl;
    }
}
