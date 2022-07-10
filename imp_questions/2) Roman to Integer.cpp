class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> U={ {'I',1},
                                   {'V',5},
                                   {'X',10},
                                   {'L',50},
                                   {'C',100},
                                   {'D',500},
                                   {'M',1000},
                                  };
         int num=0;
        
        for(int i=0;i<s.length();i++)
        {
            if(U[s[i]]<U[s[i+1]])
            {
               num+=U[s[i+1]]-U[s[i]];
                i++;
            }
            else
            {
                num+=U[s[i]];
            }
        }
        return num;
    }
};
