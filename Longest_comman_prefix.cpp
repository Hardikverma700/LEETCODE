// Longest Comman Prefix
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s = "";
        int min = 345567;
        if(strs.size() == 0)
            return "";
        if(strs.size() == 1)
            return strs[0];
        for(int i = 0; i < strs.size(); i ++)
        {
            if(min > strs[i].size())
            {
                min = strs[i].size();
            }
        }
        for(int j = 0; j < min; j ++)
        {
            char cc = strs[0][j];
            for(int i = 0; i < strs.size(); i ++)
            {
                if(strs[i][j] != cc)
                    return s;
               else if(strs[i][j] == cc && i == strs.size() - 1)
                {
                    s += cc;
                }
            }
        }
        return s;
    }
};
int main()
{
	Solution Hardik;
	vector<string> v;
	v.push_back("hardik");
	v.push_back("harsh");
	v.push_back("hard");
	
	cout<<Hardik.longestCommonPrefix(v);
	return 0;
}
