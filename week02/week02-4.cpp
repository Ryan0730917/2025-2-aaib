//week02-4.cpp Leetcode�ǲ߭p�e��2�D
class Solution {
public:
    char findTheDifference(string s, string t) {
        int A[256] = {};//�i�H�α�l�Ӹ˦r��,�j�A��,�N��@�}�l�Ū�
        for(int i=0; i<s.length();i++){//�r�ꪺfor �j��
            char c = s[i];//���X�r��
            A[c]++;//��r����J��l
        }
        for(int i=0; i<t.length(); i++){
            char c = t[i];
            A[c]--;
            if(A[c] < 0)return c;
        }
        return 0;
    }
};
