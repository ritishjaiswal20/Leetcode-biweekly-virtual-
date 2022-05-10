class Solution {
public:
    bool canConvertString(string s, string t, int k) {
        if(s.size()!=t.size())
        {
            return false;
        }
        for(int i=1;i<=k;i++)
        {
            for(int j=0;j<s.size();j++)
            {
                int dif=s[j]-t[j];
                if(dif<0)
                {
                    dif=dif*(-1);
                }
                if(dif>0)
                {
                    dif=26-dif;
                }
                if(dif==i)
                {
                    s[i]=t[i];
                    break;
                }
            }
        }
        return s==t;
    }
};
//not completely correct but it gives you some idea 
