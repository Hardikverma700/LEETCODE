class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<char> vec1;
        vec1.push_back(' ');
        int count = 0;
        char temp;
        for(int i = 0; i < sentence.size(); ++i)
        {
            temp = sentence[i];
            for(int j = 0; j < vec1.size(); j++)
            {
                if(temp == vec1[j])
                {
                    break;
                }
                else if(j == vec1.size() - 1)
                {
                    vec1.push_back(temp);
                    count++;
                }
            }
        }
        if(count == 26)
            return true;
        return false;
    }
};
