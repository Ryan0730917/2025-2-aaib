///week 02-2.cpp c++
///要用 c++ 的字串 反過來
#include <istream>///
#include <string>
using namespace std;
int main()
{
    cout
    string a, ans;
    cin >>a;
    for(int i=a.length()-1; i>=0; i--){
        ans += a[i];
    }
    cout<< a<< ans;




    }
