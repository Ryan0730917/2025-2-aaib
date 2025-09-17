//week02-4.cpp Leetcode學習計畫第2題
class Solution {
public:
    char findTheDifference(string s, string t) {
        int A[256] = {};//可以用桶子來裝字母,大括號,代表一開始空的
        for(int i=0; i<s.length();i++){//字串的for 迴圈
            char c = s[i];//取出字母
            A[c]++;//把字母放入桶子
        }
        for(int i=0; i<t.length(); i++){
            char c = t[i];
            A[c]--;
            if(A[c] < 0)return c;
        }
        return 0;
    }
};
