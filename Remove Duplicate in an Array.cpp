
    int removeDuplicates(vector<int>& nums) {
//          if the size of vector is 0; Then return 0;
        if(nums.size()==0)
        {
            return 0;
        }
//          k will increment when both are not equal
        int k=1;
        for(int i=1;i<nums.size();i++)
        {
//              if current and  previous are different, then copy the current value to their original place( here at k)
         if(nums[i]!=nums[i-1]){
             nums[k]=nums[i];
             k++;
            
        }
        }
        return k;
        
    }
