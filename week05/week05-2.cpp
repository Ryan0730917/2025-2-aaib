///week05-2.cpp
///�d��stringstream
#include <iostream>/// ���Fcin cout
#include <string>///���F�r��string
#include <sstream>
using namespace std;///���F���g std::cin
int main()
{
    string line;
    getline( cin, line );
    cout << line << endl;

    stringstream ss(line);
    string word;
    while( ss >> word ){
        cout << "ssŪ��1�Ӧr:" << word <<endl;
    }
}
