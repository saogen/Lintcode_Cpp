ass Solution {
public:
    int partitionArray(vector<int> &nums, int k) {
        // write your code here
        int i = 0;
        int j = nums.size()-1;
        if (j==0) return 0;
        while (i<j){
            if (nums[i]<k){
                ++i;
                continue;
            }
            if (nums[j]>=k){
                --j;
                continue;
            }
            if (nums[i]>=k && nums[j]<k){
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
                ++i;
                --j;
            }
        }
        if(i==j and nums[i]<k) return i+1;
        return i;
    }
};

