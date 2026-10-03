class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>res;
        unordered_map<int,int>freq;//map for frequency
        for(int i:nums)//frequency loop
        freq[i]++;
        for(auto it:freq)//majority loop
        {
            if(it.second>(nums.size()/2))//checks for majority elements
            res.push_back(it.first);//push to vector
        }
        return res;//return vector as output
    }
};
