class Solution {
public:
    string interpret(string command) {
        int size = command.size();
        char temp;
        string ans = "";
        for(int i = 0; i < size; ++i)
        {
            
            if(command[i] == 'G')
                ans += "G";
            else if(command[i] == '(' && command[i+1] ==')')
            {
                ans += "o";
                i = i + 1;
            }
            else
            {
                ans += "al";
                i = i + 3;
            }
            
        }
        return ans;
    }
};
