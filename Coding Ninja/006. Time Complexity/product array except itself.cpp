vector<long long> getProductArray(int nums[], int n)
{
   // Write your code here.
       long long ans = 1;
        if(n==1) return {0};
        vector<long long> vt(n,0);
        int zero=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                ans*=nums[i];
            }else{
                zero++;
            }
        }
        if(zero>=2) return vt;
        if(zero==1){
        for(int i=0;i<n;i++){
           if(nums[i]==0) vt[i]=ans;
         }
            return vt;
        }
        for(int i=0;i<n;i++){
            vt[i]=ans/nums[i];
        }
        return vt;
}
