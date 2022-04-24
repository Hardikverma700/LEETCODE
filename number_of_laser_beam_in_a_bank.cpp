class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int count1 = 0;
        vector<int> num_device;
        int str_size = bank[0].size();
        int vec_size = bank.size();
        for(int i = 0; i < vec_size; i++)
        {
            for(int j = 0; j < str_size; j++)
            {
                if(bank[i][j] == '1')
                    count1 += 1;
            }
            num_device.push_back(count1);
            count1 = 0;
        }
        int ans = 0;
        int num1 = 0;
        int num2 = 0;
        int flag = 0;
        for(int i = 0; i < num_device.size(); i++)
        {
            if(num_device[i] != 0 && flag == 0 && num1 == 0)
            {
                num1 = num_device[i];
                flag = 1;
            }
            else if(num_device[i] != 0)
            {
                num2 = num_device[i];
                ans += num1 * num2;
                num1 = num2;
            }
            
        }
        return ans;
    }
};
