class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        vector<int> v1;
        string answer = "";
        int index;
        for(int i = 0; i < indices.size(); i++)
        {
              for(int j = 0; j < indices.size(); j++)
              {
                  if(i == indices[j])
                  {
                      index = j;
                      answer += s[index];
                  }
              }
        }
        return answer;
    }
};
