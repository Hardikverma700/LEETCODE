class Solution {
public:
     int value(char c)
        {
            if(c == 'I')
                return 1;
            else if(c == 'V')
                return 5;
            else if(c == 'X')
                return 10;
            else if(c == 'L')
                return 50;
            else if(c == 'C')
                return 100;
            else if(c == 'D')
                return 500;
            else if(c == 'M')
                return 1000;
         return 0;
        }
    int romanToInt(string s) {
        
       
        
        
        if(s.size() == 2)
        {
            int present, next;
            present = value(s[0]);
            next = value(s[1]);
            if( present >= next)
               {
               return present + next;
               }
               else
               {return next - present;
               }
        }
        int temp = 0;
        char c;
        c = s[0];
        int temp1 = value(c);
        int result = 0;
        temp = 0;
        int i = 0;
        while(i < s.size())
        {
               
               temp = value(s[i]);
               if(temp >= value(s[i + 1]) || (i == s.size() - 1) )
                  {
                   result = result + temp;
                   i++;
                  }
                      else{
                          
                   result = result + value(s[i + 1]) - temp;
                      i = i + 2;
                      }
                          
        }
        return result;
        
            
    }
};