 void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       int i=m-1;
        int j=n-1;
        int ins=n+m-1;
        while(i>=0 and j>=0){
            if(nums1[i]>nums2[j]){
                nums1[ins]=nums1[i];
                      i--;
                      ins--;
                      }       
            else
            {
                nums1[ins]=nums2[j];
                ins--;
                j--;
            }
        }
        while(i>=0){
            nums1[ins--]=nums1[i--];
        }
        while(j>=0){
            nums1[ins--]=nums2[j--];
        }
        
    }     
