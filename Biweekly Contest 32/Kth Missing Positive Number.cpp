class Solution {
public:
    int findKthPositive(vector<int>& a, int k) {
    vector<int>h(2002,0);
        for(int i=0;i<a.size();i++)
        {
            h[a[i]]++;
        }
        int x=1;
        for(int i=1;i<h.size();i++)
        {    
            if(h[i]==0)
            {
               if(x==k)
               {
                return i;
               }
               x++;
            }
        }
        return -1;
    }
};
