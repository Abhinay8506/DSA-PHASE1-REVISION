 vector<vector<int>> threeSum(vector<int>& nums) {
       int n=nums.size();
       sort(nums.begin(),nums.end());
       vector<vector<int>>result;
       for(int i=0;i<n-2;i++){
           int j=i+1;
           int k=n-1;
           while(j<k){
                if((nums[i]+ nums[j]+nums[k])>0){
                    k--;
                }
                else if((nums[i]+ nums[j]+nums[k])<0){
                    j++;
                }

                else
                {      vector<int>p;
                       p.push_back(nums[i]);
                       p.push_back(nums[j]);
                       p.push_back(nums[k]);
                       if(result.size()==0){
                           result.push_back(p);
                       }
                       else if(count(result.begin(),result.end(),p)==0){
                              result.push_back(p);
                       }
                       j++;
                       k--;

                        
                }
           }
       }
       return result; 
    }
