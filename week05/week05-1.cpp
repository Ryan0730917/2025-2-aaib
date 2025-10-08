//week05-1.cpp
//Leetcode 學習計畫
class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s); //把字串syring當iostream 的 cin來用
        string  word; //字串
        //ss >> word; //像是cin>>word一樣,現在的ss可以用 ss >> word
        while(ss >> word ){ //一直讀,讀到不能讀為止

        }
        cout << word;
        return word.length();

    }
};
