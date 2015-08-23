class Solution {
public:    
    /**
     * @param numbers : Give an array numbers of n integer
     * @return : Find all unique triplets in the array which gives the sum of zero.
     */
    vector<vector<int> > threeSum(vector<int> &nums) {
        // write your code here
        sort(nums.begin(), nums.end());
        vector<vector<int> > res;
        for (int i=0; i<nums.size()-2; ++i) {
            int j = i+1;
            int k = nums.size()-1;
            while(j<k){
                int sum = nums[i]+nums[j]+nums[k];
                if(sum==0){
                    vector<int> temp;
                    temp.push_back(nums[i]);
                    temp.push_back(nums[j]);
                    temp.push_back(nums[k]);
                    res.push_back(temp);
                    j++;
                    k--;
                } else {
                    if(sum>0){
                        k--;
                    }
                    if(sum<0){
                        j++;
                    }
                }
            }
            
        }
        //there are several ways to remove dupilcate in vector:
        
        // 1:
        /*
        set<vector<int>> s;
        for(int i=0; i<res.size(); ++i){
            s.insert(res[i]);
        }
        res.assign(s.begin(), s.end());
        */
        
        // 2:
        /*
        sort(res.begin(), res.end());
        res.erase( unique(res.begin(), res.end()), res.end());
        */
        
        // 3:
        set<vector<int>> s(res.begin(), res.end());
        res.assign(s.begin(), s.end());
        
        return res;
    }
};


