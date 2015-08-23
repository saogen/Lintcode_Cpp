class Solution {
public:
    /*
     * @param numbers : An array of Integer
     * @param target : target = numbers[index1] + numbers[index2]
     * @return : [index1+1, index2+1] (index1 < index2)
     */
    vector<int> twoSum(vector<int> &nums, int target) {
        // write your code here
        int i = 0;
        vector<int> res;
        unordered_map<int, int> map;
        for(int k=0; k<nums.size(); ++k){
            map[nums[k]] = k;
        }
        for(int i=0; i<nums.size(); ++i){
            unordered_map<int, int>::const_iterator it;
            it = map.find(target-nums[i]);
            if (it!=map.end()){
                res.push_back(i+1);
                res.push_back(it->second+1);
                return res;
            }
        }
        return res;
    }
};

