//week05-1.cpp
//Leetcode �ǲ߭p�e
class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s); //��r��syring��iostream �� cin�ӥ�
        string  word; //�r��
        //ss >> word; //���Ocin>>word�@��,�{�b��ss�i�H�� ss >> word
        while(ss >> word ){ //�@��Ū,Ū�줣��Ū����

        }
        cout << word;
        return word.length();

    }
};
