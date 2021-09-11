 vector<int> twoSum(vector<int>& nums, int target) {
       vector<int>ans;
        unordered_map<int,int> map;
        for(int i=0;i<nums.size();i++){
//                if we find the element;
           if(map.find(target-nums[i])!=map.end()){
               ans.push_back(i);
               ans.push_back(map[target-nums[i]]);
                
            }
//              we didnt 
            else{
                map[nums[i]]=i;
                
            }
        }
        return ans;
        
    }
